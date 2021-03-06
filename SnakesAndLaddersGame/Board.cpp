#include "Board.h"

Board::Board() :m_snakeLocations{ 32,36,48,62,88,95,97 }, m_ladderLocations{ 2,4,8,21,29,50,71,80 }, m_boardPlaces{ } {
}

void Board::checkSnakePlaces(Player& player) {
	if (player.getPlace()+1 == 32)
		player.setSnakePlace(player, 22);
	if (player.getPlace()+1 == 36)
		player.setSnakePlace(player, 30);
	if (player.getPlace()+1 == 48)
		player.setSnakePlace(player, 22);
	if (player.getPlace()+1 == 62)
		player.setSnakePlace(player, 44);
	if (player.getPlace()+1 == 88)
		player.setSnakePlace(player, 64);
	if (player.getPlace()+1 == 95)
		player.setSnakePlace(player, 39);
	if (player.getPlace()+1 == 97)
		player.setSnakePlace(player, 19);
}

void Board::checkLadderPlaces(Player& player){
	if (player.getPlace() + 1 == 2)
		player.setLadderPlace(player, 26);
	if (player.getPlace() + 1 == 4)
		player.setLadderPlace(player, 10);
	if (player.getPlace() + 1 == 8)
		player.setLadderPlace(player, 22);
	if (player.getPlace() + 1 == 21)
		player.setLadderPlace(player, 21);
	if (player.getPlace() + 1 == 29)
		player.setLadderPlace(player, 48);
	if (player.getPlace() + 1 == 50)
		player.setLadderPlace(player, 17);
	if (player.getPlace() + 1 == 71)
		player.setLadderPlace(player, 21);
	if (player.getPlace() + 1 == 80)
		player.setLadderPlace(player, 19);
}

void Board::checkPlayerVictory(Player& player) const{
	if (player.getWon() == true)
		std::cout << "Player Victory";
}

void Board::createPlaceNumbers(std::vector<std::string>& places) {
	places.clear();
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

void Board::updatePlaces(std::vector<std::string>& places, Player& player1, Player& player2){
	for (int i{ 0 }; i < 100; i++) {
		if (i == player1.getPlace())
			places.at(i) = "| X |";
		if (i == player2.getPlace())
			places.at(i) = "| O |";
		if (i == player1.getPlace() && i == player2.getPlace())
			places.at(i) = "|X/O|";
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

void Board::printSnakeLocations() const{
	std::cout << "Snake locations: ( ";
	for (auto i : m_snakeLocations) {
		std::cout << i << " ";
	}
	std::cout << ")\n";
}

void Board::printLadderLocations() const{
	std::cout << "Ladder locations: ( ";
	for (auto i : m_ladderLocations) {
		std::cout << i << " ";
	}
	std::cout << ")\n";
}

Board::~Board(){
}