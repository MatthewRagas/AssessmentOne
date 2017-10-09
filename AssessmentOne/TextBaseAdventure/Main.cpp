#include<iostream>
#include"String.h"
#include"assert.h"


int main()
{
	String* stringArray = &String("Matthew Fawkin Ragas");
	String* coolio = &String("Gnarly Dude");
	String* test = &String("Matthew Ragas");
	String* bro = &String("Gnarly Dude");
	String* test2;
	String* test3;
	assert(stringArray->StringLength() == 20);
	assert(coolio->IndexAccess(0) == 'G');
	assert((stringArray == coolio) == false);
	assert(&String(*coolio + *test) == );
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
	String* append = &String(*coolio + *test);
	String dumb = test->AppendString(*stringArray);
	String notDumb = test->PrependString(*stringArray);
	char m = stringArray->IndexAccess(0);
	char a = stringArray->IndexAccess(1);
	char t = stringArray->IndexAccess(2);
	char t2 = stringArray->IndexAccess(3);
	char h = stringArray->IndexAccess(4);
	char e = stringArray->IndexAccess(5);
	char w = stringArray->IndexAccess(6);
	char space = coolio->IndexAccess(6);
	char g = coolio->IndexAccess(0);
	bool subString = test->WordSearch("the", 0);


	system("pause");
}