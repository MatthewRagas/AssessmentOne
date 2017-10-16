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
	void SetPosition(float x, float y);
	Point2D GetPosition();
	int DecreaseLives();
};