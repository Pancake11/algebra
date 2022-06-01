#include "game_of_life.h"
#include <random>
#include <time.h>
#include <iostream>
using namespace std;

int game_of_life::random_value()
{
	return rand() % 4;
}

bool game_of_life::cell_taken(int i, int j)
{
	return this->_generation[i][j];
}

game_of_life::game_of_life()
{
	srand(time(NULL));

	for (size_t i = 0; i < ROWS; ++i) 
	{
		for (size_t j = 0; j < COLS; ++j) 
		{
			if (random_value() == 1) { // 1/4 chance to be true
				_generation[i][j] = 1;
			}
			else {
				_generation[i][j] = 0;
			}
			_next_generation[i][j] = 0;
		}
	}
}

void game_of_life::next_generation()
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			int alive = 0;
			for (int x = i - 1; x <= i + 1; ++x)
			{
				for (int y = j - 1; y <= j + 1; ++y)
				{
					if (x == i && y == j)
						++y;
					if (x >= 0 && y >= 0) {
						alive += this->cell_taken(x,y);
					}
				}
			}

			if (alive >= 4) {
				if (this->cell_taken(i, j)) {
					this->_next_generation[i][j] = 0;
				}
			}
			else if (alive == 3) {
					this->_next_generation[i][j] = 1;
			}
			else if (alive < 2 && this->cell_taken(i, j)) {
				this->_next_generation[i][j] = 0;
			}
			else {
				this->_next_generation[i][j] = this->_generation[i][j];
			}
		}
	}

	for (size_t i = 0; i < ROWS; ++i)
	{
		for (size_t j = 0; j < COLS; ++j)
		{
			this->_generation[i][j] = this->_next_generation[i][j];
		}
	}

}

void game_of_life::draw()
{
	if (system("CLS")) system("clear");
	for (size_t i = 0; i < ROWS; ++i)
	{
		for (size_t j = 0; j < COLS; ++j)
		{
			if (this->_generation[i][j])
				cout << "*";
			else
				cout << "-";
		}
		cout << endl;
	}
}
