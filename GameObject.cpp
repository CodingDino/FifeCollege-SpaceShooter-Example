#include "GameObject.h"

GameObject::GameObject()
	: objectSprite()
	, position(0,0)
	, velocity(0,0)
{
}

void GameObject::Draw(sf::RenderTarget& target)
{
	// Draw the sprite to the target
	// This will be the same for every object so no need to do this in each object, just the base!
	target.draw(objectSprite);
}

void GameObject::Update(sf::Time deltaTime)
{
	// velocity is defined as:
	// v = change in p / change in t
	// Therefore:
	// change in p = v * change in t
	// Update position based on velocity:
	SetPosition(position + velocity * deltaTime.asSeconds());
		// (we must use SetPosition to update the sprite!)

	// Other objects might have more logic, so they will override this function
	// then call this version alongside their own logic
}

sf::Vector2f GameObject::GetPosition()
{
	return position;
}

void GameObject::SetPosition(sf::Vector2f newPosition)
{
	position = newPosition;
	objectSprite.setPosition(newPosition);
}

void GameObject::SetVelocity(sf::Vector2f newVelocity)
{
	velocity = newVelocity;
}
