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
			continue;
		}
	}
	return true;
}
