#include "Player.h"

Player::Player()
	: Ship			()
	, playerTexture	()
{
	// Setup sprite
	playerTexture.loadFromFile("Assets/Graphics/player.png");
	objectSprite.setTexture(playerTexture);

	// Setup data
	moveSpeed = 500.0f;
}

void Player::Update(sf::Time deltaTime)
{
	// First, check input from the player before moving
	Input();

	Ship::Update(deltaTime); // Call base class version (will call GameObject version automatically)
	// That will get us our movement based on velocity
}

void Player::Input()
{
	// Movement
	bool moving = false;
	sf::Vector2f moveDirection(0, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		// Move player up
		moveDirection.y = -1.0f;
		moving = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		// Move player left
		moveDirection.x = -1.0f;
		moving = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		// Move player down
		moveDirection.y = 1.0f;
		moving = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		// Move player right
		moveDirection.x = 1.0f;
		moving = true;
	}
	// Only move if we have pressed at least one button
	if (moving)
	{
		Move(moveDirection);
	}
	else // Otherwise, stop
	{
		SetVelocity(sf::Vector2f(0, 0));
	}
}
