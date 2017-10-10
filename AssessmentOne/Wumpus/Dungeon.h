#pragma once
#include"Player.h"
#include"Point2D.h"
#include"PittyWumpus.h"

class Dungeon
{
	Point2D* mRooms;
	Player* mPlayer;
	int mNumCols;
	int mNumRows;

	void GenRooms();//makes new rooms.

public:
	Dungeon();
	Dungeon(int rows, int cols, int rooms);
	bool CheckPlayerPosition();
	void PrintRooms();
};