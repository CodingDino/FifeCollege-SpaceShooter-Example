#include "Enemy.h"
#include <math.h>

Enemy::Enemy()
	: Ship				()
	, movementTarget	(0,0)
	, arrivalDistance	(5)
	, arrivedAtTarget	(false)
{
}

Enemy::~Enemy()
{
}

void Enemy::Update(sf::Time deltaTime)
{
	if (!arrivedAtTarget)
	{
		// Get target direction
		// Use vector maths - direction = end point - current point
		sf::Vector2f direction = movementTarget - GetPosition();

		// Check if we've arrived
		// We need to know how far away our target is, so get the
		// magnitude of the direction vector
		float magnitude = sqrt(direction.x * direction.x + direction.y * direction.y);

		if (magnitude < arrivalDistance)
		{
			// We have arrived!
			arrivedAtTarget = true;
			// Stop our movement
			SetVelocity(sf::Vector2f(0, 0));
		}
		else
		{
			// Our Move function already normalises this direction so we don't need to do it now!
			Move(direction);
		}
	}

	// Call Update for our base class, which will actually move us
	Ship::Update(deltaTime);
}

void Enemy::SetTarget(sf::Vector2f newTarget)
{
	movementTarget = newTarget;
	arrivedAtTarget = false;
}

bool Enemy::GetArrivedAtTarget()
{
	return arrivedAtTarget;
}
