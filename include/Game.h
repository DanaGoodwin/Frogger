#pragma once

#include <SFML/Graphics.hpp>

#include "Frog.h"
#include "Truck.h"

class Game : public sf::Drawable
{
private:
	Frog m_frog;
	Truck m_truck;
	sf::RectangleShape m_startShape;
	sf::RectangleShape m_finishShape;
public:
	Game();
	//void update(float fElapsedTime);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	sf::RectangleShape Game::GetShape();
	//void processKeyPress(sf::Keyboard::Key keyCode);
};