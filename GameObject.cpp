#include "GameObject.h"

GameObject::GameObject()
	: objectSprite()
	, position(0,0)
{
}

void GameObject::Draw(sf::RenderTarget& target)
{
	// Draw the sprite to the target
	// This will be the same for every object so no need to do this in each object, just the base!
	target.draw(objectSprite);
}

void GameObject::SetPosition(sf::Vector2f newPosition)
{
	position = newPosition;
	objectSprite.setPosition(newPosition);
}