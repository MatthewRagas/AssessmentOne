#include<iostream>
#include"String.h"
#include"Dungeon.h"
#include"Player.h"
#include"Point2D.h"
#include"PittyWumpus.h"

int main()
{
	Player* billy = new Player("Matthew", true);
	Point2D* rooms = new Point2D(2, 5);
	Dungeon cave(5, 5, billy, rooms);

	system("pause");
}