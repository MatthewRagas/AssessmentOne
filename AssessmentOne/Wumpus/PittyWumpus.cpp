#include "PittyWumpus.h"
#include<iostream>
#include"Point2D.h"

PittyWumpus::PittyWumpus()
{
	mPos = new Point2D();
}

PittyWumpus::PittyWumpus(Point2D * pos)
{
	mPos = pos;
}

void PittyWumpus::SetPosition(Point2D * pos)
{
	mPos = pos;
}
