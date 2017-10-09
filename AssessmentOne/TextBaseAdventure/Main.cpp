#include<iostream>
#include"String.h"
#include"assert.h"
#include<fstream>
using namespace std;


int main()
{
	fstream successFile;
	successFile.open("successFile.txt", ios_base::out | ios_base::app);
	String* stringArray = &String("Matthew Fawkin Ragas");
	String* coolio = &String("Gnarly Dude");
	String* test = &String("Matthew Ragas");

	assert (stringArray->StringLength() == 20);
	assert(coolio->IndexAccess(0) == 'G');
	assert((stringArray == coolio) == false);
	assert(*coolio + *test == String("Gnarly DudeMatthew Ragas"));
	assert(test->AppendString(*stringArray) == String("Matthew RagasMatthew Fawkin Ragas"));
	assert(test->PrependString(*stringArray) == String("Matthew Fawkin RagasMatthew Ragas"));
	assert(coolio->CStyleString() == "Gnarly Dude");
	assert(stringArray->LowerCaseCopy() == String("matthew fawkin ragas"));
	assert(stringArray->UpperCaseCopy() == String("MATTHEW FAWKIN RAGAS"));
	assert(test->WordSearch("the", 0) == true);
	
	if (successFile.is_open())
	{
		int test0Length = stringArray->StringLength();
		if (test0Length == 20)
			successFile << "Test Length: Successfull!\n";
		else
			cout<<"There has been an error. Test failed...\n";
		bool test1Compare = stringArray == coolio;
		if (test1Compare == false)
			successFile << "Test Compare: successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
		String test2Append = test->AppendString(*stringArray);
		if (test2Append == String("Matthew RagasMatthew Fawkin Ragas"))
			successFile << "Test Append: Successfull!\n";
		else
			cout<<"There has been an error. Test failed...\n";
		String test3Prepend = test->PrependString(*stringArray);
		if (test3Prepend == String("Matthew Fawkin RagasMatthew Ragas"))
			successFile << "Test Prepend: Successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
		String test4Lower = stringArray->LowerCaseCopy();
		if (test4Lower == String("matthew fawkin ragas"))
			successFile << "Test Lower Case: Successfull!\n";
		else
			cout << "There has been an error. Test Failed...\n";
		String test5Upper = stringArray->UpperCaseCopy();
		if (test5Upper == String("MATTHEW FAWKIN RAGAS"))
			successFile << "Test Upper Case: Successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
		const char* test6CStyle = coolio->CStyleString();
		if (test6CStyle == "Gnarly Dude")
			successFile << "Test C-Style: Successfull!\n";
		else
			cout << "There has been an error. Test failed.\n";
		char test7Index = stringArray->IndexAccess(5);
		if (test7Index == 'e')
			successFile << "Test Get Index: Successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
		bool subString = test->WordSearch("the", 0);
		if (subString == true)
			successFile << "Test SubString: Successfull!\n";
		else
			cout << "There has been an error. Test failed...\n";
	}
	String person;
	std::cin >> person;

	system("pause");
}