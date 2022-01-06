#include "Star.h"

// Initialise static (class-wide) data:
sf::Texture* Star::starTexture = nullptr;


Star::Star(sf::Vector2f newScreenSize)
	: GameObject	()
	, screenSize	(newScreenSize)
{
	if (starTexture == nullptr) // it hasn't been set up yet
	{
		starTexture = new sf::Texture(); // dynamic allocation - create the object and store it's address all at once
		starTexture->loadFromFile("Assets/Graphics/star.png"); // Set up the star texture
	}

	objectSprite.setTexture(*starTexture);

	// Random starting position
	sf::Vector2f newPosition(0, 0);
	newPosition.x = rand() % (int)screenSize.x;
	newPosition.y = rand() % (int)screenSize.y;
	SetPosition(newPosition);

	// Set initial left-moving velocity
	SetVelocity(sf::Vector2f(-750, 0));

	// NOTE: Speed and size of star could be constructor parameter
	// This would allow parallax effect to set sets of stars at different sizes and speeds
}

void Star::Update(sf::Time deltaTime)
{
	// Call base update to move object
	GameObject::Update(deltaTime);

	// Check if we've gone off screen left
	if (GetPosition().x + starTexture->getSize().x <= 0)
	{
		// We have, so move to the right and randomise y position
		sf::Vector2f newPosition(0, 0);
		newPosition.x = screenSize.x;
		newPosition.y = rand() % (int)screenSize.y;
		SetPosition(newPosition);
	}
}
