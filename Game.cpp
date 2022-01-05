#include "Game.h"

Game::Game()
	: window(sf::VideoMode::getDesktopMode(), "Space Shooter", sf::Style::Titlebar | sf::Style::Close)
	, gameClock()
{
	window.setMouseCursorVisible(false);
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
		// Get the time passed since the last frame and restart our game clock
		sf::Time frameTime = gameClock.restart();
		// TODO: Call update on all objects


		// -----------------------------------------------
		// Draw Section
		// -----------------------------------------------
		// Clear the window to a single colour
		window.clear(sf::Color(20, 20, 20));
		// Draw everything to the window
		// Display the window contents on the screen
		window.display();
	}
}

void Game::Draw()
{

}

void Game::Update()
{

}

void Game::SetupGame()
{
}
