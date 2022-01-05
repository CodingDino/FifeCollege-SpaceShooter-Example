#pragma once
#include "Ship.h"
class Player :
    public Ship
{
public:

    // Constructors and Destructors
    Player();

private:

    sf::Texture playerTexture;

};

