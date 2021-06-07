#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include "Player.h"
class Board{
private:
	__int16 m_snakeLocations[7];
	__int16 m_ladderLocations[8];
public:
	Board();
	Player player1;
	Player player2;
	__int16 m_boardPlaces[101];
	std::string board[101];
	void checkSnakePlaces();
	void checkLadderPlaces();
	void createPlaceNumbers(__int16 places[]);
	~Board();
};
#endif

