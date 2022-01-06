#pragma once
#include "Ship.h"
class Enemy :
    public Ship
{

public:

    // Constructors / Destructors
    Enemy();
    virtual ~Enemy();

    // Game Loop Functions
    virtual void Update(sf::Time deltaTime) override;

protected:

    // Enemy class functions
    void SetTarget(sf::Vector2f newTarget);
    bool GetArrivedAtTarget();

private:

    // Internal Data
    sf::Vector2f movementTarget;
    float arrivalDistance;
    bool arrivedAtTarget;
};

