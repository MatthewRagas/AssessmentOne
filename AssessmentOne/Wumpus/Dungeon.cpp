#include"Dungeon.h"
#include"Player.h"
#include"Point2D.h"
#include"PittyWumpus.h"
using namespace std;


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
	mRooms = new Point2D[7 * 7];
	mPlayer = new Player();
	mNumCols = 7;
	mNumRows = 7;
	mBeast = new PittyWumpus[4];
	for (int i = 0; i < 4; i++)
	{
		mBeast[i].SetPosition(rand() % 7, rand() % 7);
		if (i > 0)
		{
			if ((mBeast[i].GetPosition().GetX() == mBeast[i - 1].GetPosition().GetX()) &&
				(mBeast[i].GetPosition().GetY() == mBeast[i - 1].GetPosition().GetY()))
			{
				i--;
			}
		}
	}
	GenRooms();
}

Dungeon::Dungeon(int rows, int cols, Player* player)
{
	mRooms = new Point2D[cols * rows];
	mNumCols = cols;
	mNumRows = rows;
	mPlayer = player;
	mBeast = new PittyWumpus[4];
	for (int i = 0; i < 4; i++)
	{
		mBeast[i].SetPosition(rand() % 7, rand() % 7);
		if (i > 0)
		{
			if ((mBeast[i].GetPosition().GetX() == mBeast[i - 1].GetPosition().GetX()) &&
				(mBeast[i].GetPosition().GetY() == mBeast[i - 1].GetPosition().GetY()))
			{
				i--;
			}
			else if (((mBeast[i].GetPosition().GetX() == 5) && (mBeast[i].GetPosition().GetY() == 6)) &&
				       (mBeast[i].GetPosition().GetX() == 0) && (mBeast[i].GetPosition().GetY() == 0))
			{
				i--;
			}
		}
	}
	GenRooms();
}

bool Dungeon::CheckPlayerPosition(char input)
{
	
	mPlayer->MovePlayer(input);
	for (int i = 0; i < 4; i += 2)
	{
		if ((mPlayer->GetPosition().GetX() - mBeast[i].GetPosition().GetX() == 0) &&
			(mPlayer->GetPosition().GetY() - mBeast[i].GetPosition().GetY() == 1 ||
				mPlayer->GetPosition().GetY() - mBeast[i].GetPosition().GetY() == -1))
		{//checks if the player is near a wumpus.
			cout << "You smell something foul.\n";
		}
		else if ((mPlayer->GetPosition().GetY() - mBeast[i].GetPosition().GetY() == 0) &&
			(mPlayer->GetPosition().GetX() - mBeast[i].GetPosition().GetX() == 1 ||
				mPlayer->GetPosition().GetX() - mBeast[i].GetPosition().GetX() == -1))
		{
			cout << "You smell something foul.\n";
		}
	}
	for (int i = 1; i < 4; i += 2)
	{//checks if the player is near a pit.
		if ((mPlayer->GetPosition().GetY() - mBeast[i].GetPosition().GetY() == 0) &&
			(mPlayer->GetPosition().GetX() - mBeast[i].GetPosition().GetX() == 1 ||
				mPlayer->GetPosition().GetX() - mBeast[i].GetPosition().GetX() == -1))
		{
			cout << "You feel a warm breeze.\n";
		}
		else if ((mPlayer->GetPosition().GetX() - mBeast[i].GetPosition().GetX() == 0) &&
			(mPlayer->GetPosition().GetY() - mBeast[i].GetPosition().GetY() == 1 ||
				mPlayer->GetPosition().GetY() - mBeast[i].GetPosition().GetY() == -1))
		{
			cout << "You feel a warm breeze.\n";
		}
	}
	if (mPlayer->GetPosition() == mBeast[0].GetPosition())
	{
		std::cout << "You ran into a wumpus!!!\n";
		std::cout << "-1 life.\n";
		mPlayer->SetPosition(0, 0);
		mPlayer->DecramentLives();
		 
	}
	else if (mPlayer->GetPosition() == mBeast[1].GetPosition())
	{
		std::cout << "You fell into a pit!!!\n";
		std::cout << "-1 life.\n";
		mPlayer->SetPosition(0, 0);
		mPlayer->DecramentLives();
		 
	}
	else if (mPlayer->GetPosition() == mBeast[2].GetPosition())
	{
		std::cout << "You ran into a wumpus!!!\n";
		std::cout << "-1 life.\n";
		mPlayer->SetPosition(0, 0);
		mPlayer->DecramentLives();
		 
	}
	else if (mPlayer->GetPosition() == mBeast[3].GetPosition())
	{
		std::cout << "You fell into a pit!!!\n";
		std::cout << "-1 life.\n";
		mPlayer->SetPosition(0, 0);
		mPlayer->DecramentLives();
	}
	else if ((mPlayer->GetPosition().GetX() >= 0 && mPlayer->GetPosition().GetX() < mNumRows) &&
		(mPlayer->GetPosition().GetY() >= 0 && mPlayer->GetPosition().GetY() < mNumCols))
	{
		return true;
	}
	else
	{
		std::cout << "You fell off the map! Your position is reset to (0,0).\n";
		std::cout << "-1 life.\n";
		mPlayer->SetPosition(0,0);
		mPlayer->DecramentLives();
	}
	return false;
}

void Dungeon::PrintRooms()
{

}

Player Dungeon::GetPlayer()
{
	return *mPlayer;
}

std::ostream & operator<<(std::ostream & is, Point2D & point)
{			
	is << "<" << point.GetX() << "," << point.GetY() << ">";
	return is;
}
