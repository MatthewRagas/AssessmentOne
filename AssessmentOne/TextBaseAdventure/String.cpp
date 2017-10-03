#include "String.h"

String::String()
{
	mStringArray = new char[250];
}

String::String(char* name)
{
	mStringArray = name;
}

int String::StringLength()
{
	int i = 0;
	while (mStringArray[i] != '\0')
	{
		i++;
	} 
	return i;
}

bool String::operator ==(String & other)
{
	//Calling in the Length function as it is automatically uses
	//it for the passed in String(lhs) of the == operator function.
	if (StringLength() != other.StringLength())
	{
		return false;
	}
	int i = 0;
	while (i < StringLength())
	{
		if (mStringArray[i] != other.mStringArray[i])
		{
			return false;
		}
		else if (mStringArray[i] == other.mStringArray[i])
		{
			i++;
		}
	}
	return true;
}

String String::operator +(String & other)
{
	

	return 0;
}
	
const char* String::CStyleString()
{
	return mStringArray;
}

String String::LowerCaseCopy()
	{
		//Creates a temporary character array.
		char* lower = new char[255];
		for (int i = 0; i < StringLength(); i++)
		{
			if (mStringArray[i] >= 65 && mStringArray[i] <= 90)
			{
				lower[i] = mStringArray[i] + 32;
			}
			else
				lower[i] = mStringArray[i];
		}
		//Tapes up the end of the array
		lower[StringLength()] = '\0';

		return String(lower);
	}

	String String::UpperCaseCopy()
	{
		char* upper = new char[255];
		for (int i = 0; i < StringLength(); i++)
		{
			if (mStringArray[i] >= 97 && mStringArray[i] <= 122)
			{
				upper[i] = mStringArray[i] - 32;
			}
			else
				upper[i] = mStringArray[i];
		}
		upper[StringLength()] = '\0';

		return String(upper);
	}

