#include"Dungeon.h"
#include"Player.h"
#include"Point2D.h"
#include"PittyWumpus.h"



void Dungeon::GenRooms()
{
	int index = 0;
	for (int i = 0; i < mNumCols; i++)
	{
		for (int n = 0; n < mNumRows; n++)
		{
			mRooms[index] = Point2D(n, i);
			std::cout << mRooms[index] << std::endl;
			index++;
		}
	}
}

Dungeon::Dungeon()
{
	mRooms = new Point2D[25];
	mPlayer = new Player();
	mNumCols = 5;
	mNumRows = 5;
}

Dungeon::Dungeon(int rows, int cols, Player* player, Point2D* rooms)
{
	mRooms = rooms;
	mNumCols = cols;
	mNumRows = rows;
	mPlayer = player;
}

bool Dungeon::CheckPlayerPosition()
{
	
	return true;
}

void Dungeon::PrintRooms()
{

}

std::ostream & operator<<(std::ostream & is, Point2D & point)
{			
	is << point.GetX() << point.GetY();
	return is;
}
