#pragma once

class String
{
	const char* mStringArray;

public:
	
	//Default constructor of string.
	String();
	
	//Custom constructor of string.
	String(char* name);
	
	//Argument      : None.
	//Description   : Looks at the length of the string and puts it in an integer format.
	//Precondition  : takes in the argument length to determine the length of the string.
	//Postcondition : returns the value of length as the length of the string.
	int StringLength();
	
	//Argument      : The integer iter will be assigned the value of the index.
	//Description   : Accesses a specific character from a specific indx in the string.
	//Precondiiton  : Will take in the integer of iter to access a specific index of the string array.
	//Postcondition : Will return the character located in the specific index inputed(?) by the user.
	char IndexAccess(int iter);

	//Argument      : Passes in the characters of the two strings being compared.
	//Description   : Compares two string to see whether or not they are the same.
	//Precondition  : Assumes that the two strings are not the same, meaning false.
	//Postcondition : After evaluation will return true or false based on the comnparison of the strings.
	bool operator == (String & other);

	//Arguments     : String and other.String
	//Description   : Adds two strings together in the order of input.
	//Precondition  : Puts in 2 seperate strings.
	//Postcondition : Strings combined together to form one string.
	String operator +(String & other);

	//Argument      : 
	//Description   : Adds one string to the end of another.
	//Precondition  : Adds two strings together into one.
	//Postcondition : Returns the one string of the two that were added together.
	String AppendString(String rhs);

	//Argument      : None.
	//Description   : Adds one string to the beginning of another.
	//Precondition  : Two strings are seperate from eachother.
	//Postcondition : One string is added to the front of another to make one string.
	String PrependString(String rhs);

	//Argument      : None.
	//Description   : Returns the value of the string in a constant character pointer (const char*)
	//Precondition  : The string is a (const char*).
	//Postcondition : The string is still (const char*).
	const char* CStyleString();

	//Argument      : None.
	//Description   : Makes all of the characters in the string lower case.
	//Precondition  : Characters in the array may be lower or upper case.
	//Postcondition : All characters in the string are now lower case.
	String LowerCaseCopy();

	//Argument      : None.
	//Description   : Makes all characters in the string upper case.
	//Precondition  : Characters in the array may be upper or lower case.
	//Postcondition : All characters in the string are now upper case.
	String UpperCaseCopy();

	//Argument      : None.
	//Description   : Used to find a sub-string within the string class.
	//Precondition  : The string is one long line of characters.
	//Postcondition : There are two strings, one deriving from the original string
	bool WordSearch(String subString);

	//Argument      : None.
	//Description   : The ability to find a string from a particular starting index.
	//Precondition  : The array is in its naturally generated form.
	//Postcondition : Part of the string has been replaced by another small copy of the string.
	String SpecificWordSearch();

	//Argument      : None.
	//Description   : The ability to replace a sub-string found within the string with a different sub-string.
	//Precondition  : The string is in its natural generated form.
	//Postcondition : Part of the string has been replaced with another string.
	char ReplaceSubString();

	//Argument      : None.
	//Description   : The ability to set the string to an input C-style string.
	//Precondition  : 
	//Postcondition : 
	char CStyleInput();


};