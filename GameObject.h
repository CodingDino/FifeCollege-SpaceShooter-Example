#pragma once
#include <SFML/Graphics.hpp>

class GameObject
{
public:

	// Constructors and Destructors
	GameObject();

	// Game Loop Functions
	void Draw(sf::RenderTarget& target);
	virtual void Update(sf::Time deltaTime); // Mark virtual as we intend to override this later

	// Getters and Setters
	sf::Vector2f GetPosition();
	void SetPosition(sf::Vector2f newPosition);
	void SetVelocity(sf::Vector2f newVelocity);

protected:

	sf::Sprite objectSprite;

private:

	sf::Vector2f position;
	sf::Vector2f velocity;
};

