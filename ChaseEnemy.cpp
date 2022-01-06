#include "ChaseEnemy.h"

// Initialise static (class-wide) data:
sf::Texture* ChaseEnemy::chaseEnemyTexture = nullptr;

ChaseEnemy::ChaseEnemy()
	: Enemy()
{
	// Setup sprite
	if (chaseEnemyTexture == nullptr) // it hasn't been set up yet
	{
		chaseEnemyTexture = new sf::Texture(); // dynamic allocation - create the object and store it's address all at once
		chaseEnemyTexture->loadFromFile("Assets/Graphics/enemyChase.png"); // Set up the star texture
	}

	objectSprite.setTexture(*chaseEnemyTexture);

	// Setup data
	moveSpeed = 500.0f;

	SetTarget(sf::Vector2f(300,300));
}

ChaseEnemy::~ChaseEnemy()
{
}
