#include "Board.h"
#include <array>


Board::Board() :m_snakeLocations{ 32,34,48,62,88,95,97 }, m_ladderLocations{ 1,4,8,21,28,50,71,80 }, m_boardPlaces{ 0 } {
}

void Board::checkSnakePlaces(){
}

void Board::checkLadderPlaces(){
}

void Board::createPlaceNumbers(__int16 places[]) {
	for (int i{ 0 }; i < 100; i++) {
		places[i] = i + 1;
		std::cout << places[i] << "\n";
	}
}

Board::~Board(){
}