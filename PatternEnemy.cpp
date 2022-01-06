#include "PatternEnemy.h"

// Initialise static (class-wide) data:
sf::Texture* PatternEnemy::patternEnemyTexture = nullptr;

PatternEnemy::PatternEnemy()
	: Enemy()
{
	if (patternEnemyTexture == nullptr) // it hasn't been set up yet
	{
		patternEnemyTexture = new sf::Texture(); // dynamic allocation - create the object and store it's address all at once
		patternEnemyTexture->loadFromFile("Assets/Graphics/enemyShoot.png"); // Set up the star texture
	}

	objectSprite.setTexture(*patternEnemyTexture);
}

PatternEnemy::~PatternEnemy()
{
}
