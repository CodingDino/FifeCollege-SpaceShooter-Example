#include "ChaseEnemy.h"

// Initialise static (class-wide) data:
sf::Texture* ChaseEnemy::chaseEnemyTexture = nullptr;

ChaseEnemy::ChaseEnemy()
	: Enemy()
{
	if (chaseEnemyTexture == nullptr) // it hasn't been set up yet
	{
		chaseEnemyTexture = new sf::Texture(); // dynamic allocation - create the object and store it's address all at once
		chaseEnemyTexture->loadFromFile("Assets/Graphics/enemyChase.png"); // Set up the star texture
	}

	objectSprite.setTexture(*chaseEnemyTexture);
}

ChaseEnemy::~ChaseEnemy()
{
}
