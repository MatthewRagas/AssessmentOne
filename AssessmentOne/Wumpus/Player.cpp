#include<iostream>
#include"Player.h"
#include"Point2D.h"

Player::Player()
{
	mLives = 3;
	*mName = "little Billy";
	mGender = true;
	mPos = new Point2D(0,0);
}

Player::Player(char * name, bool gender)
{
	mLives = 3;
	*mName = name;
	mGender = gender;
	mPos = new Point2D(6,0);
}

void Player::MovePlayer(char direction)
{
	if (direction == 'w')
		*mPos = *mPos + Point2D(0, -1);
	else if (direction == 's')
		*mPos = *mPos + Point2D(0, 1);
	else if (direction == 'a')
		*mPos = *mPos + Point2D(-1, 0);
	else if (direction == 'd')
		*mPos = *mPos + Point2D(1, 0);
}

void Player::SetPosition(int x, int y)
{
	mPos = new Point2D(x, y);
}

Point2D Player::GetPosition()
{
	return *mPos;
}

