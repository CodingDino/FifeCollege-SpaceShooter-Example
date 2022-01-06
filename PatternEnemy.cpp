#include "PatternEnemy.h"

// Initialise static (class-wide) data:
sf::Texture* PatternEnemy::patternEnemyTexture = nullptr;

PatternEnemy::PatternEnemy(sf::Vector2f screenSize)
	: Enemy				()
	, movementPattern	()
	, instructionIndex	(0)
{
	if (patternEnemyTexture == nullptr) // it hasn't been set up yet
	{
		patternEnemyTexture = new sf::Texture(); // dynamic allocation - create the object and store it's address all at once
		patternEnemyTexture->loadFromFile("Assets/Graphics/enemyShoot.png"); // Set up the star texture
	}

	objectSprite.setTexture(*patternEnemyTexture);

	// Setup data
	moveSpeed = 400.0f;

	// Position enemy
	SetPosition(sf::Vector2f(screenSize.x, screenSize.y / 2));

	// Set up pattern (this could be fed in instead of set up here, to allow multiple patterns!)
	// Simple zig-zag pattern
	movementPattern.push_back(sf::Vector2f(-400, -200));
	movementPattern.push_back(sf::Vector2f(-400, 200));

	// Set initial movement target
	// Instructions are relative, so need to add current position
	SetTarget(GetPosition() + movementPattern[instructionIndex]);
}

PatternEnemy::~PatternEnemy()
{
}

void PatternEnemy::AI()
{
	// If we have arrived at our target, set a new one
	if (GetArrivedAtTarget())
	{
		// determine the next index
		++instructionIndex;
		// If we've run out of instructions, repeat the pattern
		if (instructionIndex >= movementPattern.size())
		{
			instructionIndex = 0;
		}

		// Set our target based on our current instruction index
		// Instructions are relative, so need to add current position
		SetTarget(GetPosition() + movementPattern[instructionIndex]);
	}
}
