#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

class Player{
private:
	__int16 m_place;
	bool m_won;
public:
	Player();
	__int16 getPlace()const;
	bool getWon()const;
	void checkWin(__int16 m_place);
	//void hasWon(bool& m_won);
	void roll();
	~Player();
};

#endif

