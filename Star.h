#pragma once
#include "GameObject.h"
class Star :
    public GameObject
{

public:

    // Constructors and Destructors
    Star(sf::Vector2f newScreenSize);

    // Game Loop Functions
    void Update(sf::Time deltaTime) override; // Override isn't required but is best practice

private:

    // Internal Data

    static sf::Texture* starTexture;
    sf::Vector2f screenSize;

};

