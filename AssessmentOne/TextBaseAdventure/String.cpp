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

char String::IndexAccess(int iter)
{
	
	return mStringArray[iter];
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

String String::AppendString(String rhs)
{
	
	return (*this + rhs);
}

String String::PrependString(String rhs)
{
	return (rhs + *this);
}

//---String is (lhs) ---other is (rhs) of the "+" operator.
String String::operator +(String & other)
{
	char* append = new char[255];
	int i = 0;
	while (i < StringLength())
	{
		append[i] = mStringArray[i];
		i++;
	}
	int n = 0;
	while (n < other.StringLength())
	{
		append[i] = other.mStringArray[n];
		n++;
		i++;
	}
	append[i] = '\0';

	return String(append);
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

	bool String::WordSearch(String subString)
	{
		int index = 0;
		int index2;
		int iter = 0;
		int i = 0;
		while (iter < this->StringLength())
		{
			for (i; index < subString.StringLength(); i++)
			{
				if (mStringArray[i] == subString.mStringArray[index])
				{
					index++;
					index2 = i + 1;
					break;
				}
			}
			for (index2; index < subString.StringLength(); index2++)
			{
				if (mStringArray[index2] == subString.mStringArray[index])
				{
					index++;
				}
				else if (mStringArray[index2] != subString.mStringArray[index])
				{
					break;
				}
			}
			
			iter++;
			i = index2 + 1;
		}
		if (subString.mStringArray[index] == '\0')
		{
			return true;
		}
		
		return false;
	}

	String String::SpecificWordSearch()
	{
		return String();
	}

