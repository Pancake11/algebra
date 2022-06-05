#ifndef _GAME_OF_LIFE_H_
#define _GAME_OF_LIFE_H_

#include <iostream>
#include <string>
#include <fstream>
#include <SFML/Graphics.hpp>

using namespace std;

class game_of_life {
private:
	static const unsigned int COLS = 40;
	static const unsigned int ROWS = 40;
	sf::RenderWindow* window;
	bool _generation[ROWS][COLS];
	bool _next_generation[ROWS][COLS];
	int random_value();
	bool cell_taken(int i, int j);

public:
	game_of_life(sf::RenderWindow* window);
	void next_generation();
	void draw();
};

#endif


