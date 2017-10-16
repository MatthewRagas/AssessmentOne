#include<iostream>
#include"MyString.h"
#include"assert.h"
#include<fstream>
using namespace std;


int main()
{
	fstream successFile;
	successFile.open("successFile.txt", ios_base::out | ios_base::app);
	MyString* stringArray = &MyString("Matthew Fawkin Ragas");
	MyString* coolio = &MyString("Gnarly Dude");
	MyString* test = &MyString("Matthew Ragas");

	assert (stringArray->MyStringLength() == 20);
	assert(coolio->IndexAccess(0) == 'G');
	assert((stringArray == coolio) == false);
	assert(*coolio + *test == MyString("Gnarly DudeMatthew Ragas"));
	assert(test->AppendMyString(*stringArray) == MyString("Matthew RagasMatthew Fawkin Ragas"));
	assert(test->PrependMyString(*stringArray) == MyString("Matthew Fawkin RagasMatthew Ragas"));
	assert(coolio->CStyleMyString() == "Gnarly Dude");
	assert(stringArray->LowerCaseCopy() == MyString("matthew fawkin ragas"));
	assert(stringArray->UpperCaseCopy() == MyString("MATTHEW FAWKIN RAGAS"));
	assert(test->WordSearch("the", 0) == true);
	
	if (successFile.is_open())
	{
		int test0Length = stringArray->MyStringLength();
		if (test0Length == 20)
			successFile << "Test Length: Successfull!\n";
		else
			cout<<"There has been an error. Test failed...\n";
		bool test1Compare = stringArray == coolio;
		if (test1Compare == false)
			successFile << "Test Compare: successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
		MyString test2Append = test->AppendMyString(*stringArray);
		if (test2Append == MyString("Matthew RagasMatthew Fawkin Ragas"))
			successFile << "Test Append: Successfull!\n";
		else
			cout<<"There has been an error. Test failed...\n";
		MyString test3Prepend = test->PrependMyString(*stringArray);
		if (test3Prepend == MyString("Matthew Fawkin RagasMatthew Ragas"))
			successFile << "Test Prepend: Successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
		MyString test4Lower = stringArray->LowerCaseCopy();
		if (test4Lower == MyString("matthew fawkin ragas"))
			successFile << "Test Lower Case: Successfull!\n";
		else
			cout << "There has been an error. Test Failed...\n";
		MyString test5Upper = stringArray->UpperCaseCopy();
		if (test5Upper == MyString("MATTHEW FAWKIN RAGAS"))
			successFile << "Test Upper Case: Successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
		const char* test6CStyle = coolio->CStyleMyString();
		if (test6CStyle == "Gnarly Dude")
			successFile << "Test C-Style: Successfull!\n";
		else
			cout << "There has been an error. Test failed.\n";
		char test7Index = stringArray->IndexAccess(5);
		if (test7Index == 'e')
			successFile << "Test Get Index: Successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
		bool subMyString = test->WordSearch("the", 0);
		if (subMyString == true)
			successFile << "Test SubMyString: Successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
	}
	MyString person;
	std::cin >> person;

	system("pause");
}