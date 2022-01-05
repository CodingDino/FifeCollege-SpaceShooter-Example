#include "Ship.h"
#include <math.h>

Ship::Ship()
	: GameObject	()
	, moveSpeed		(0) // Set up in child class
{
}

void Ship::Move(sf::Vector2f direction)
{
	// Normalise direction to get length 1 so we can scale it to correct speed in that direction
	// Get magnitude (pythagorean theorem)
	float magnitude = sqrt(direction.x * direction.x + direction.y * direction.y);
	// Normalised vector = original / magnitude
	sf::Vector2f normalisedDirection = direction / magnitude;
	// Set our velocity to this new value
	SetVelocity(normalisedDirection * moveSpeed);
}
