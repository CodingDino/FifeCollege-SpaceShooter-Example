#pragma once
#include "Enemy.h"
class ChaseEnemy :
    public Enemy
{

public:

    // Constructors / Destructors
    ChaseEnemy();
    virtual ~ChaseEnemy();

private:

    static sf::Texture* chaseEnemyTexture;
};

