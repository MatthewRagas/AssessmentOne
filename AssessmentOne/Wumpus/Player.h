#pragma once
#include"Point2D.h"

class Player
{
	int mLives;
	char* mName[255];
	bool mGender;
	Point2D* mPos;

public:
	Player();
	Player(int x, int y);
	void MovePlayer(char direction);
	void SetPosition(int x, int y);
	void DecramentLives();
	int Lives();
	Point2D GetPosition();
};