#include <iostream>
#include "Frog.h"

using namespace std;

Frog::Frog()
{
	m_bodyShape.setSize(sf::Vector2f(40, 40));
	m_bodyShape.setPosition(sf::Vector2f(300, 345));
	m_bodyShape.setFillColor(sf::Color(0,100,0));
}

/*void Frog::update(float fTimeElapsed) 
{

}*/

void Frog::draw(sf::RenderTarget& window, sf::RenderStates states) const 
{
	window.draw(m_bodyShape); 
}

void Frog::Move(sf::Event event)
{
	if (sf::Keyboard::Key::Left == event.key.code)
	{
		m_bodyShape.move(-60.0f, 0.0f); // The frog will move -60 Left the window when the Up key is pressed.
	}
	else if (sf::Keyboard::Key::Right == event.key.code)
	{
		m_bodyShape.move(60.0f, 0.0f); // The frog will move 60 Right the window when the Up key is pressed.
	}
	else if (sf::Keyboard::Key::Up == event.key.code)
	{
		m_bodyShape.move(0.0f, -60.0f); // The frog will move -60 up the window when the Up key is pressed.
	}
	else if (sf::Keyboard::Key::Down == event.key.code)
	{
		m_bodyShape.move(0.0f, 60.0f); // The frog will move -60 Down the window when the Up key is pressed.
	}
}

sf::RectangleShape Frog::GetShape()
{
	return m_bodyShape; // This will fetch the frogs shape so it can be used in the main.cpp
}

void Frog::Reposition()
{
	m_bodyShape.setPosition(sf::Vector2f(300, 345)); // When the frog hits a hazzard it will reset this postition
}

/*void Frog::Up()
{
	m_bodyShape.move(0, -80);
}

void Frog::Down()
{
	m_bodyShape.move(0, 80);
}

void Frog::Left()
{
	m_bodyShape.move(-80, 0);
}

void Frog::Right()
{
	m_bodyShape.move(80, 0);
}*/

