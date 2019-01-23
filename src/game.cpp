#include "Game.h"
#include "Frog.h"
#include "Truck.h"

Game::Game()
{
	m_startShape.setSize(sf::Vector2f(600, 80));
	m_startShape.setFillColor(sf::Color::Green);
	m_startShape.setPosition(sf::Vector2f(0, 330));

	m_finishShape.setSize(sf::Vector2f(600, 80));
	m_finishShape.setFillColor(sf::Color(128,128,128));
	m_finishShape.setPosition(sf::Vector2f(0, 10));
}

/*void Game::update(float fElapsedTime)
{

}*/

void Game::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	//target.draw(m_frog);
	//target.draw(m_truck);
	target.draw(m_startShape);
	target.draw(m_finishShape);
}

/*void Game::processKeyPress(sf::Keyboard::Key keyCode)
{
}*/

sf::RectangleShape Game::GetShape()
{
	return m_finishShape;
}