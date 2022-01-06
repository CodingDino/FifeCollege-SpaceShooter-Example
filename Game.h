#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Star.h"
#include "PatternEnemy.h"

class Game
{

public:

	// Constructors/Destructors
	Game();

	// Game loop functions
	void Run();
	void Draw();
	void Update();

	// Other Public functions
	//void AddPlayerBullet(Bullet newBullet);
	//void AddEnemyBullet(Bullet newBullet);

private:

	// Private functions
	void SetupGame();

	// Game Data
	sf::RenderWindow window;
	sf::Clock gameClock;
	Player player;
	std::vector<Star*> stars;
	PatternEnemy enemy;
	//std::vector<Bullet> playerBullets;
	//std::vector<Enemy> enemies;
	//std::vector<Bullet> enemyBullets;
	//float lastEnemySpawn;
	//sf::Text scoreDisplay;
	//sf::Text gameOverDisplay;
	//sf::Font gameFont;
};

