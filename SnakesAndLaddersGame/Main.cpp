#include "Board.h"
#include "Player.h"
#include <iostream>

int main() {
	Board board;
	board.createPlaceNumbers(board.m_boardPlaces);
	board.printGrid(board.m_boardPlaces);
	return 0;
}