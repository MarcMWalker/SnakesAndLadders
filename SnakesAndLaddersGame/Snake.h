#ifndef SNAKE_H
#define SNAKE_H

class Snake{
private:
	unsigned __int16 m_place;
	bool m_won;
	Snake();
	~Snake();
public:
	unsigned __int16 getPlace()const;
	void hasWon(bool& m_won);
};

#endif

