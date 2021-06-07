#ifndef PLAYER_H
#define PLAYER_H

class Player{
private:
	unsigned __int16 m_place;
	bool m_won;
public:
	Player();
	unsigned __int16 getPlace()const;
	void hasWon(bool& m_won);
	~Player();
};

#endif

