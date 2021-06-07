#include "Board.h"



Board::Board() :m_snakeLocations{ 32,34,48,62,88,95,97 }, m_ladderLocations{ 1,4,8,21,28,50,71,80 }, m_boardPlaces{ } {
}

void Board::checkSnakePlaces(){
}

void Board::checkLadderPlaces(){
}

void Board::createPlaceNumbers(std::vector<std::string> &places) {
	for (int i{ 0 }; i < 100; i++) {
		std::string number{};
		if (i >= 9 && i < 99) {
			number = ("| " + std::to_string(i+1) + "|");
		}
		else if( i == 99) {
			number = ("|" + std::to_string(i+1) + "|");
		}
		else {
			number = ("|  " + std::to_string(i+1) + "|");
		}
		places.push_back(number);
	}
}

void Board::printGrid(std::vector<std::string>& places){
	for (int i{ 100 }; i > 0; --i){
		if (i % 10 == 0) {
			std::cout << "\n";
			std::cout << "--------------------------------------------------\n";
		}
		std::cout << places.at(i-1);
	}
	std::cout << "\n--------------------------------------------------\n";
}

Board::~Board(){
}

