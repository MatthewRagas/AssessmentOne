#include<iostream>
#include"Dungeon.h"
#include "MyString.h"
#include"time.h"
using namespace std;

int main()
{
	//-------------------------------Variables-----------------------------------------
	srand(time(NULL));
	char input;
	MyString name;	
	Player* treasure = new Player();
	Dungeon cave;
	//-------------------------------Game introduction---------------------------------
	cout << "Welcome to Wumpus World!" << endl;
	cout << "What you are looking at is the size of the dungeon you will be exploring.\n";
	cout << "You will start in the room marked <0,0>.\n";
	system("pause");
	
	cout << "Currently your chracter's name is little Billy.\n" << "If you wish to change it, input the name now.\n"
		<< "If you do not wish to change it type 'NO'.\n"
		<< endl;
	cin >> name;
	if (name == MyString("NO"))
	{
		name = "little Billy";
	}
	system("CLS");
	cout << "you can move " << name << " around with the W,A,S and D keys.\nThat is UP, LEFT, DOWN, and RIGHT."
		<< endl;
	system("pause");
	system("CLS");
	cout << "Your objective is to find the treasure within the dungeon. Do that and you win!" << endl;
	cout << "As you move through the dungeon the game will describe the rooms for you.\n";
	cout << "The game will let you know if you come near the treasure. It will read\n";
	cout << "'You see a dim light'.\n";
	cout << "You have to watch out for wumpi and pitts though.\n";
	system("pause");
	system("CLS");
	cout << "If you come to a room that is near a wumpus, the game will warn you with\n";
	cout << "'You smell something foul'.\n";
	cout << "If you come near a pit the game will warn you with\n";
	cout << "'you feel a warm breeze'.\n";
	cout << "May the odds be ever in your favor " << name << "!\n";
	system("pause");
	system("CLS");
	cave.GenRooms();
	cout << "keep in mind that you start at <0,0>, the top left of the grid.\n";
	cout << "So going up or left on your first move will\n";
	cout << "cause you to fall off the map and lose a life. Oh yea don't fall off the map\n";
	cout << "either for reasons recently revealed. You have 3 lives in total.\n";
	system("pause");
	//---------------------------------Game Loop------------------------------------------	
	system("CLS");
	cout << "The room is dark. You can't see much.\n";
	system("pause");
	int p = 1;
	while (cave.GetPlayer().Lives() > 0)
	{
		system("CLS");
		
		
		while (p == 1)
		{
			cout << "You are now free to move about the cave.\n";
			p++;
		}
		cin >> input;
		
		cave.CheckPlayerPosition(input);
		
		system("pause");
	}
	cout << "You are out of lives.\n                ....GAME OVER....\n";
	system("CLS");
	system("pause");
}