#include <SFML/Graphics.hpp>
#include "gameOflLife.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Hello, SFML world!");
	window.setFramerateLimit(60);
	game_of_life the_game(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		while (true) {
			window.clear();
			the_game.draw();
			window.display();
			the_game.next_generation();
		}
	}

	return 0;
}