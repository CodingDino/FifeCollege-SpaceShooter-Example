#pragma once
#include "GameObject.h"
#include <SFML/Audio.hpp>
class Ship :
    public GameObject
{
public:

    // Constructors / Destructors
    Ship();

protected:

    // Ship shared Functions
    void Move(sf::Vector2f direction);

    // Ship shared Data
    float moveSpeed;

private:

};

