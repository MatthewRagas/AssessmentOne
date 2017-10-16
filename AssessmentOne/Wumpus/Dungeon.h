#pragma once
#include"Player.h"
#include"PittyWumpus.h"
#include<iostream>

class Dungeon
{
	Point2D* mRooms;
	Player* mPlayer;
	PittyWumpus mDeath;
	int mNumCols;
	int mNumRows;
	
	

public:
	void GenRooms();//makes the rooms.
	Dungeon();
	Dungeon(int rows, int cols, Player* player);
	bool CheckPlayerPosition();
	void PrintRooms();
	friend std::ostream& operator << (std::ostream& is, Point2D &point);
};