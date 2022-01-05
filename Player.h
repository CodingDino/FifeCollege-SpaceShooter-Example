#pragma once
#include "Ship.h"
class Player :
    public Ship
{
public:

    // Constructors and Destructors
    Player();

    // Game Loop Functions
    void Update(sf::Time deltaTime) override; // Override isn't required but is best practice

private:

    // Internal Functions
    void Input();

    // Internal Data
    sf::Texture playerTexture;

};

