#include"Dungeon.h"
#include"Player.h"
#include"Point2D.h"
#include"PittyWumpus.h"
#include<iostream>


void Dungeon::GenRooms()
{
	int grid[25];
}

Dungeon::Dungeon()
{
	mRooms = new Point2D[25];
	mPlayer = new Player();
	mNumCols = 5;
	mNumRows = 5;
}

Dungeon::Dungeon(int rows, int cols, int rooms)
{
	mRooms = new Point2D[rooms];
	mNumCols = cols;
	mNumRows = rows;
	mPlayer = new Player();
}

bool Dungeon::CheckPlayerPosition()
{
	
	return true;
}

void Dungeon::PrintRooms()
{

}
