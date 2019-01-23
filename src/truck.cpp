#pragma once

#include <SFML/Graphics.hpp>
#include "Truck.h"

Truck::Truck(/*sf::Vector2u size, float posX, float posY*/)
{
	//truck 1 posY 260
	//truck 2 posY 180
	//truck 3 posY 100
	m_bodyShape.setPosition(sf::Vector2f(400,260)); //400,260
	m_bodyShape.setSize(sf::Vector2f(120, 60)); 
	m_bodyShape.setFillColor(sf::Color::Red);

	//originalPosX = posX;
	//originalPosY = posY;
}

void Truck::update(float fTimeElapsed)
{

}
void Truck::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
	window.draw(m_bodyShape);
}
void Truck::Move(sf::Vector2u size)
{
	m_bodyShape.move(0.9, 0);
	if (m_bodyShape.getPosition().x > size.x)
	{
		m_bodyShape.setPosition(0 - m_bodyShape.getSize().x, m_bodyShape.getPosition().y);
	}
}

sf::RectangleShape Truck::GetShape() // This fetches the shape of the truck so it can be used in the collion on main.cpp
{
	return m_bodyShape;
}