#pragma once
#include"Player.h"
#include"PittyWumpus.h"
#include<iostream>

class Dungeon
{
	char grid[5][5];
	Point2D* mRooms;
	Player* mPlayer;
	PittyWumpus mDeath;
	int mNumCols;
	int mNumRows;

	

public:
	void GenRooms();//makes the rooms.
	Dungeon();
	Dungeon(int rows, int cols, Player* player, Point2D* rooms);
	bool CheckPlayerPosition();
	void PrintRooms();
	friend std::ostream& operator << (std::ostream& is, Point2D &point);
};