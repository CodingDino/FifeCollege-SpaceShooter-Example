#include "Game.h"

Game::Game()
	: window(sf::VideoMode::getDesktopMode(), "Space Shooter", sf::Style::Titlebar | sf::Style::Close)
	, gameClock()
{
	window.setMouseCursorVisible(false);

	SetupGame();
}

void Game::Run()
{
	// Game loop
	while (window.isOpen())
	{
		// -----------------------------------------------
		// Window Event Section
		// -----------------------------------------------
		sf::Event gameEvent;
		while (window.pollEvent(gameEvent))
		{
			// This section will be repeated for each event waiting to be processed

			// Did the player try to close the window?
			if (gameEvent.type == sf::Event::Closed)
			{
				// If so, call the close function on the window.
				window.close();
			}
		} // End event polling loop

		// Close game if escape is pressed
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			// If so, call the close function on the window.
			window.close();
		}

		// -----------------------------------------------
		// Update Section
		// -----------------------------------------------
		Update();

		// -----------------------------------------------
		// Draw Section
		// -----------------------------------------------
		Draw();
	}
}

void Game::Draw()
{
	// Clear the window to a single colour
	window.clear(sf::Color(20, 20, 20));

	// TODO: Draw everything to the window
	player.Draw(window);

	// Display the window contents on the screen
	window.display();
}

void Game::Update()
{
	// Get the time passed since last frame
	sf::Time deltaTime = gameClock.restart();

	// TODO: Call update on all objects
	player.Update(deltaTime);
}

void Game::SetupGame()
{
	// These actions will happen every time the game is started or restarted
	player.SetPosition(sf::Vector2f(100,window.getSize().y/2-50));
}
