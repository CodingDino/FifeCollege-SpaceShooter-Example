#pragma once
#include <SFML/Graphics.hpp>

class GameObject
{
public:

	// Constructors and Destructors
	GameObject();

	// Game Loop Functions
	void Draw(sf::RenderTarget& target);

	// Getters and Setters
	void SetPosition(sf::Vector2f newPosition);

protected:

	sf::Sprite objectSprite;

private:

	sf::Vector2f position;
};

