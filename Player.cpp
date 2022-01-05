#include "Player.h"

Player::Player()
	: Ship ()
{
	playerTexture.loadFromFile("Assets/Graphics/player.png");
	objectSprite.setTexture(playerTexture);
}
