#pragma once
#include "Enemy.h"

// Forward Declaration
class Player;

class ChaseEnemy :
    public Enemy
{

public:

    // Constructors / Destructors
    ChaseEnemy(Player* newPlayer);
    virtual ~ChaseEnemy();

protected:

    // Enemy Functions
    virtual void AI() override;

private:

    static sf::Texture* chaseEnemyTexture;
    Player* targetPlayer;

};

