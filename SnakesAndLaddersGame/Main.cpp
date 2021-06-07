#include "Board.h"
#include "Player.h"
#include <iostream>

int main() {
	Board board;
	board.createPlaceNumbers(board.m_boardPlaces, board.player1, board.player2);
	board.printGrid(board.m_boardPlaces);
	board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
	board.printGrid(board.m_boardPlaces);
	board.createPlaceNumbers(board.m_boardPlaces, board.player1, board.player2);
	
	
	board.player1.roll();
	board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
	board.printGrid(board.m_boardPlaces);
	return 0;
}