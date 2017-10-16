#include "PittyWumpus.h"
#include<iostream>
#include"Point2D.h"
#include"time.h"

PittyWumpus::PittyWumpus()
{
	srand(time(NULL));
	mPos = new Point2D(rand() % 7,rand() % 7);
}

PittyWumpus::PittyWumpus(Point2D * pos)
{
	mPos = pos;
}

void PittyWumpus::SetPosition(float x, float y)
{
	mPos = new Point2D(x, y);
}

Point2D PittyWumpus::GetPosition()
{
	return *mPos;
}