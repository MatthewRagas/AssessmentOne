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
	Player(char* name, bool gender);
	void MovePlayer(char direction);
	void SetPosition(Point2D* pos);
};