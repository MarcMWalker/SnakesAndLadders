#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Player.h"
#include <Windows.h>

class Board{
private:
	std::vector<__int16> m_snakeLocations;
	std::vector<__int16> m_ladderLocations;
public:
	Board();
	Player player1;
	Player player2;
	std::vector<std::string> m_boardPlaces;
	void checkSnakePlaces(Player& player);
	void checkLadderPlaces(Player& player);
	void checkPlayerVictory(Player& player)const;
	void createPlaceNumbers(std::vector<std::string> &places);
	void updatePlaces(std::vector<std::string>& places, Player& player1, Player& player2);
	void printGrid(std::vector<std::string>& places);
	void printSnakeLocations()const;
	void printLadderLocations()const;
	~Board();
};
#endif

