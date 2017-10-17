#pragma once
#include"Point2D.h"

class PittyWumpus
{
	Point2D* mPos;

public:
	PittyWumpus();
	PittyWumpus(Point2D* pos);
	void SetPosition(int x, int y);
	Point2D GetPosition();
};