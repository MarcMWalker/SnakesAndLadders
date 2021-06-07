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