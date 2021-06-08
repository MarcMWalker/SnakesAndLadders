#include "Board.h"
#include "Player.h"
//#include <stdlib.h>
//#include <time.h>
//#include <chrono>
//#include <thread>
#include <iostream>
#include <Windows.h>

void anotherGameCheck(bool& exit) {
	char check{};
	std::cin >> check;
	switch (check) {
	case'Y':
	case'y':
		std::cout << "\nStarting another game..";
		exit = false;
		break;
	case 'N':
	case 'n':
		std::cout << "\nShutting down...";
		exit = true;
		break;
	default:
		break;
	}
}

int main() {
	
	bool exit{};
	while (exit != true) {
		Board board;
		board.createPlaceNumbers(board.m_boardPlaces);
		board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
		board.printGrid(board.m_boardPlaces);
		board.createPlaceNumbers(board.m_boardPlaces);
		board.printLadderLocations();
		board.printSnakeLocations();

		while (board.player1.getWon() != true || board.player2.getWon() != true) {

			board.createPlaceNumbers(board.m_boardPlaces);
			board.player1.roll();
			board.checkSnakePlaces(board.player1);
			board.checkLadderPlaces(board.player1);
			board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
			board.printGrid(board.m_boardPlaces);
			std::cout << "Player 1: #" << (board.player1.getPlace() + 1) << "\n";
			std::cout << "Player 2: #" << (board.player2.getPlace() + 1) << "\n";
			board.printLadderLocations();
			board.printSnakeLocations();
			board.player1.checkWin(board.player1.getPlace());

			if (board.player1.getWon() == true) {
				std::cout << "WINNER!!!\n";
				break;
			}

			board.createPlaceNumbers(board.m_boardPlaces);
			board.player2.roll();
			board.checkSnakePlaces(board.player2);
			board.checkLadderPlaces(board.player2);
			board.updatePlaces(board.m_boardPlaces, board.player1, board.player2);
			board.printGrid(board.m_boardPlaces);
			std::cout << "Player 1: #" << (board.player1.getPlace() + 1) << "\n";
			std::cout << "Player 2: #" << (board.player2.getPlace() + 1) << "\n";
			board.printLadderLocations();
			board.printSnakeLocations();
			board.player2.checkWin(board.player2.getPlace());

			if (board.player2.getWon() == true) {
				std::cout << "WINNER!!!\n";
				break;
			}
		}

		std::cout << "\n---------------------------------------------------\n";
		std::cout << "Would you like to play another game: Y/N";
		std::cout << "\n---------------------------------------------------\n";
		std::cout << "Choice: "; 
		anotherGameCheck(exit);
	}
	return 0;
}