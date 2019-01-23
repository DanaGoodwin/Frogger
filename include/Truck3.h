#pragma once

#include <SFML/Graphics.hpp>

class Truck3 : public sf::Drawable
{
private:
	sf::RectangleShape m_bodyShape;

	//float originalPosX, originalPosY;

public:
	Truck3(/*sf::Vector2u size, float posX, float posY*/);
	void update(float fTimeElapsed);
	void draw(sf::RenderTarget& window, sf::RenderStates states) const;
	void Move(sf::Vector2u size);
	sf::RectangleShape GetShape();
};
