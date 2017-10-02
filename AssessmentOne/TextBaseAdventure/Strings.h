#pragma once

class Strings
{
	char mStringArray[250];

public:
	
	//Default constructor of string.
	Strings();
	
	//Custom constructor of string.
	Strings(char name);
	
	//Argument: The integer length will be assigned the value of the length of the string.
	//Description: allows the user to see what the length of the string is in an integer format.
	//Pre-Description: takes in the argument length to determine the length of the string.
	//Post-Description: returns the value of length as the length of the string.
	int StringLength(int length);
	
	//Argument: The integer iter will be assigned the value of the index.
	//Description: Allows the user to access a specific character from a specific indx in the string.
	//Pre-Description: Will take in the integer of iter to access a specific index of the string array.
	//Post-Desciption: Will return the character located in the specific index inputed(?) by the user.
	char IndexAccess(int iter);
	bool CompareString();
	char AppendStrings();
	char PrependString();
	char CStyleString();
	char LowerCaseCopy();
	char UpperCaseCopy();
	char WordSearch();
	char SpecificWordSearch();
	char ReplaceSubString();



};