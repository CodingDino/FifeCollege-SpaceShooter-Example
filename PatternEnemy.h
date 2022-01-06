#pragma once
#include "Enemy.h"
class PatternEnemy :
    public Enemy
{

public:

    // Constructors / Destructors
    PatternEnemy();
    ~PatternEnemy();

private:

    static sf::Texture* patternEnemyTexture;
};

