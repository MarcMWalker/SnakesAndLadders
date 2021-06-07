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
		while (board.player1.getWon() != true || board.player2.getWon() != true) {
			
			board.createPlaceNumbers(board.m_boardPlaces);
			board.player1.roll();
			board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
			board.printGrid(board.m_boardPlaces);
			std::cout << "Player 1: #" << (board.player1.getPlace() + 1) << "\n";
			std::cout << "Player 2: #" << (board.player2.getPlace() + 1) << "\n";
			board.player1.checkWin(board.player1.getPlace());

			if (board.player1.getWon() == true) {
				break;
			}

			board.createPlaceNumbers(board.m_boardPlaces);
			board.player2.roll();
			board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
			board.printGrid(board.m_boardPlaces);
			std::cout << "Player 1: #" << (board.player1.getPlace() + 1) << "\n";
			std::cout << "Player 2: #" << (board.player2.getPlace() + 1) << "\n";
			board.player2.checkWin(board.player2.getPlace());
			
			if (board.player2.getWon() == true) {
				break;
			}
			
		}
	return 0;
}