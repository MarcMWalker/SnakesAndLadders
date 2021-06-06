#ifndef BOARD_H
#define BOARD_H
#include <iostream>
class Board{
private:
	__int16 m_snakeLocations[7];
	__int16 m_ladderLocations[8];
public:
	Board();
	__int16 m_boardPlaces[100];
	void checkSnakePlaces();
	void checkLadderPlaces();
	void createPlaceNumbers(__int16 places[]);
	~Board();
};
#endif
