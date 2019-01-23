#include <SFML/Graphics.hpp>
#include <iostream>

#include "Game.h"
#include "Frog.h"
#include "Truck.h"
#include "Truck2.h"
#include "Truck3.h"

using namespace std;

int main()
{

	// Took frog and truck movement and collision ideas from https://github.com/SonarSystems/Frogger-SFML-OOP-Example

	sf::RenderWindow window(sf::VideoMode(600, 450), "Frogger");
	window.setPosition(sf::Vector2i(100, 100));
	window.setFramerateLimit(60);

	/*sf::Clock timer;
	float fFrameTime = 1.f / 60.f;
	float fElapsedTime;*/

	sf::Event event;

	Game game;
	Frog m_frog;
	Truck m_truck;
	Truck2 m_truck2;
	Truck3 m_truck3;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			switch (event.type)
			{
			case sf::Event::KeyReleased:
				
				m_frog.Move(event); // when the key is released the frog will move in the direction which the player has selected with the arrow keys.
				
				break;

			default:
				break;
			}

		} // Event loop

		// Truck 1 movement
		m_truck.Move(window.getSize());

		if (m_frog.GetShape().getGlobalBounds().intersects(m_truck.GetShape().getGlobalBounds())) // if the frog intersects the trucks boundaries then the program will reposition the frog to the starting position.
		{
			m_frog.Reposition();
			m_frog.iLives -= 1;
			cout << m_frog.iLives << " lives remaing;" << endl; // This prints the number of lives to the console

		}
		else if(m_frog.iLives <= 0) // When the frogs lives are less than or are equal to 0 the window will close
		{
			cout << "Game Over" << endl << endl;
			system("pause");
			window.close();
		}

		// Truck 2 movement
		m_truck2.Move(window.getSize());

		if (m_frog.GetShape().getGlobalBounds().intersects(m_truck2.GetShape().getGlobalBounds())) // if the frog intersects the trucks boundaries then the program will reposition the frog to the starting position.
		{
			m_frog.Reposition();
			m_frog.iLives -= 1;
			cout << m_frog.iLives << " lives remaing;" << endl; // This prints the number of lives to the console
		}
		else if (m_frog.iLives <= 0) // When the frogs lives are less than or are equal to 0 the window will close
		{
			cout << "Game Over" << endl << endl;
			system("pause");
			window.close();
		}

		// Truck 3 movement
		m_truck3.Move(window.getSize());

		if (m_frog.GetShape().getGlobalBounds().intersects(m_truck3.GetShape().getGlobalBounds())) // if the frog intersects the trucks boundaries then the program will reposition the frog to the starting position.
		{
			m_frog.Reposition();
			m_frog.iLives -= 1;
			cout << m_frog.iLives << " lives remaing;" << endl; // This prints the number of lives to the console
		}
		else if (m_frog.iLives <= 0) // When the frogs lives are less than or are equal to 0 the window will close
		{
			cout << "Game Over" << endl << endl;
			system("pause");
			window.close();
		}
		
		/*fElapsedTime = timer.getElapsedTime().asSeconds();
		if (fElapsedTime > fFrameTime)
		{
			game.update(fElapsedTime);

			timer.restart();
		}*/

	//When frog reachs the end blue block the window closes
	if (m_frog.GetShape().getGlobalBounds().intersects(game.GetShape().getGlobalBounds()))
	{
		// when the frog has reached the save zone at the top of the window, the game window will close.
		cout << "well done!! you made it across safely" << endl << endl; // This prints the winning text to the console when the frog has made it to the blue rectangle.
		system("pause"); // pauses the program so the player can see the console
		window.close();
	}

		// Drawing
		window.clear(sf::Color::White);

		window.draw(game);
		window.draw(m_frog);
		window.draw(m_truck);
		window.draw(m_truck2);
		window.draw(m_truck3);
				
		window.display();
	} // main loop

	return 0;
}