#pragma once

#include <SFML/Graphics.hpp>

class Frog : public sf::Drawable
{
private:
	sf::RectangleShape m_bodyShape;
public:
	Frog();
	int iLives = 3; //number of lives the frog has
	//void update(float fTimeElapsed);
	void draw(sf::RenderTarget& window, sf::RenderStates states) const;
	void Move(sf::Event event);
	sf::RectangleShape GetShape();
	void Reposition();
	//void Up();
	//void Down();
	//void Left();
	//void Right();
	
};