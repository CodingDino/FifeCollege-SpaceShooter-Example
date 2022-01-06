#pragma once
#include "Enemy.h"
class PatternEnemy :
    public Enemy
{

public:

    // Constructors / Destructors
    PatternEnemy(sf::Vector2f screenSize);
    virtual ~PatternEnemy();

protected:

    // Enemy Functions
    virtual void AI() override;

private:

    static sf::Texture* patternEnemyTexture;
    std::vector<sf::Vector2f> movementPattern;
    int instructionIndex;
};

