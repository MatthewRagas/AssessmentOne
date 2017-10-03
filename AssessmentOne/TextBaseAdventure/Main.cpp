#include<iostream>
#include"String.h"


int main()
{
	String* stringArray = &String("Matthew Fawkin Ragas");
	String* coolio = &String("Gnarly Dude");
	String* test = &String("Matthew Ragas");
	String* bro = &String("Gnarly Dude");
	String* test2;
	String* test3;
	int length = stringArray->StringLength();
	int customLength = coolio->StringLength();
	int testLength = test->StringLength();
	bool compare = stringArray == coolio;
	bool compare2 = stringArray == test;
	bool compare3 = coolio == test;
	bool compare5 = bro == coolio;
	String bob = stringArray->LowerCaseCopy();
	String BOB = stringArray->UpperCaseCopy();
	const char* billy = coolio->CStyleString();
	


	system("pause");
}