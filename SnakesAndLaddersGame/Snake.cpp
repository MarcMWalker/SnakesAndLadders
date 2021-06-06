#include "Snake.h"

Snake::Snake() : m_place{ 0 }, m_won{false} {
}

Snake::~Snake(){
}

unsigned __int16 Snake::getPlace() const{
	return m_place;
}

void Snake::hasWon(bool& m_won){
	bool won{true};
	m_won = won;
}