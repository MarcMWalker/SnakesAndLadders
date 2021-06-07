#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Player.h"
class Board{
private:
	__int16 m_snakeLocations[7];
	__int16 m_ladderLocations[8];
public:
	Board();
	Player player1;
	Player player2;
	std::vector<std::string> m_boardPlaces;
	void checkSnakePlaces();
	void checkLadderPlaces();
	void createPlaceNumbers(std::vector<std::string> &places);
	void printGrid(std::vector<std::string>& places);
	~Board();
};
#endif

