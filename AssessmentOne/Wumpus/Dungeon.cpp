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
			std::cout << mRooms[index];
			index++;
		}
		std::cout << std::endl;
	}
}

Dungeon::Dungeon()
{
	mRooms = new Point2D[25];
	mPlayer = new Player();
	mNumCols = 5;
	mNumRows = 5;
	GenRooms();
}

Dungeon::Dungeon(int rows, int cols, Player* player)
{
	mRooms = new Point2D[cols * rows];
	mNumCols = cols;
	mNumRows = rows;
	mPlayer = player;
	GenRooms();
}

bool Dungeon::CheckPlayerPosition()
{
	if (mPlayer->GetPosition().GetX() >= 0 && mPlayer->GetPosition().GetX() < mNumRows &&
		mPlayer->GetPosition().GetY() >= 0 && mPlayer->GetPosition().GetY() < mNumCols)
	{
		return true;
	}
	else
	{
		mPlayer->SetPosition(0,0);
	}
	return false;
}

void Dungeon::PrintRooms()
{

}

std::ostream & operator<<(std::ostream & is, Point2D & point)
{			
	is << "<" << point.GetX() << "," << point.GetY() << ">";
	return is;
}
