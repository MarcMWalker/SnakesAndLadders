#include "Player.h"

Player::Player() : m_place{ 0 }, m_won{false} {
}

Player::~Player(){
}

__int16 Player::getPlace() const{
	return m_place;
}

void Player::checkWin(__int16 m_place){
	if (Player::m_place >= 99)
		Player::m_won = true;
}

void Player::roll() {
	srand(time(NULL));
	__int16 randomNum{};
	std::cout << "\nPress R to roll a number between 1-6: ";
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
	Player::m_place = (m_place + randomNum);
}

bool Player::getWon()const{
	return m_won;
}