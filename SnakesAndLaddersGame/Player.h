#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <Windows.h>

class Player{
private:
	__int16 m_place;
	bool m_won;
public:
	Player();
	__int16 getPlace()const;
	void setSnakePlace(Player& player, __int16 num);
	void setLadderPlace(Player& player, __int16 num);
	bool getWon()const;
	void checkWin(__int16 m_place);
	void roll();
	~Player();
};
#endif

