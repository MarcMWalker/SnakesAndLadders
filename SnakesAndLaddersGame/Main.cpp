#include "Board.h"
#include "Player.h"
#include <iostream>

int main() {
	Board board;
	board.createPlaceNumbers(board.m_boardPlaces);
	board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
	board.printGrid(board.m_boardPlaces);
	board.createPlaceNumbers(board.m_boardPlaces);
	int i{ 0 };
		while (board.player1.getWon() != true) {
			board.createPlaceNumbers(board.m_boardPlaces);
			board.player1.roll();
			board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
			board.printGrid(board.m_boardPlaces);
			std::cout << "Player 1: #" << (board.player1.getPlace() + 1);
			board.player1.checkWin(board.player1.getPlace());
		}
	return 0;
}