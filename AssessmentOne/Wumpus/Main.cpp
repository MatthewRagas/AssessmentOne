#include<iostream>
#include"String.h"
#include"Dungeon.h"
#include"Player.h"
#include"Point2D.h"
#include"PittyWumpus.h"

int main()
{
	Player* billy = new Player();
	Point2D* rooms = new Point2D();
	Dungeon cave(9,9, billy);
	Point2D* bill = new Point2D(billy->GetPosition());
	

	system("pause");
}