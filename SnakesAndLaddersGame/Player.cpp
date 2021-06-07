#include "Player.h"

Player::Player() : m_place{ 0 }, m_won{false} {
}

Player::~Player(){
}

unsigned __int16 Player::getPlace() const{
	return m_place;
}

void Player::hasWon(bool& m_won){
	bool won{true};
	m_won = won;
}

void Player::roll() {
	srand(time(NULL));
	__int16 randomNum{};
	std::cout << "Press Spcaebar to roll a number between 1-6";
	char roll{};
	std::cin >> roll;
	switch (roll) {
	case 'R':
	case 'r':
		randomNum = rand() % 6 + 1;
		std::cout << randomNum;
		break;
	default:
		std::cout << "Invalid input";
		break;
	}
	m_place += randomNum;
}