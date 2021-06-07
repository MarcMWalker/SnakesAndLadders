#include "Board.h"
#include <array>


Board::Board() :m_snakeLocations{ 32,34,48,62,88,95,97 }, m_ladderLocations{ 1,4,8,21,28,50,71,80 }, m_boardPlaces{ 0 } {
}

void Board::checkSnakePlaces(){
}

void Board::checkLadderPlaces(){
}

void Board::createPlaceNumbers(__int16 places[]) {
	std::cout << "--------------------------------------------------\n";
	for (int i{ 100 }; i > 0; i--) {
		if (i != 100) {
			std::cout << "| ";
		}else{ std::cout << "|"; }
		places[i] = i;
		if ((i % 10 == 0) && (i != 100)) {
			std::cout << "\n--------------------------------------------------";
			std::cout << "\n|";
		}
		if (i != 100 && i >= 10) {
			std::cout << places[i] << " ";
		}
		else if (i >= 1 && i <= 9) {
			std::cout << places[i] << "  ";
		}
		else { std::cout << places[i] << ""; }
	}
	std::cout << "|";
}

Board::~Board(){
}

