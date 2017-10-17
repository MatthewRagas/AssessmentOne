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
	void SetPosition(int x, int y);
	void DecramentLives();
	int Lives();
	Point2D GetPosition();
};