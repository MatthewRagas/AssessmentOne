#include "MyString.h"

MyString::MyString()
{
	mMyStringArray = new char[250];
}

MyString::MyString(char* name)
{
	mMyStringArray = name;
}

int MyString::MyStringLength()
{
	int i = 0;
	while (mMyStringArray[i] != '\0')
	{
		i++;
	} 
	return i;
}

char MyString::IndexAccess(int iter)
{
	
	return mMyStringArray[iter];
}

bool MyString::operator ==(MyString & other)
{
	//Calling in the Length function as it is automatically uses
	//it for the passed in MyString(lhs) of the == operator function.
	if (MyStringLength() != other.MyStringLength())
	{
		return false;
	}
	int i = 0;
	while (i < MyStringLength())
	{
		if (mMyStringArray[i] != other.mMyStringArray[i])
		{
			return false;
		}
		else if (mMyStringArray[i] == other.mMyStringArray[i])
		{
			i++;
		}
	}
	return true;
}

//---MyString is (lhs) ---other is (rhs) of the "+" operator.
MyString MyString::operator +(MyString & other)
{
	char* append = new char[255];
	int i = 0;
	while (i < MyStringLength())
	{
		append[i] = mMyStringArray[i];
		i++;
	}
	int n = 0;
	while (n < other.MyStringLength())
	{
		append[i] = other.mMyStringArray[n];
		n++;
		i++;
	}
	append[i] = '\0';

	return MyString(append);
}

MyString MyString::AppendMyString(MyString rhs)
{
	
	return (*this + rhs);
}

MyString MyString::PrependMyString(MyString rhs)
{
	return (rhs + *this);
}


	
const char* MyString::CStyleMyString()
{
	return mMyStringArray;
}

MyString MyString::LowerCaseCopy()
	{
		//Creates a temporary character array.
		char* lower = new char[255];
		for (int i = 0; i < MyStringLength(); i++)
		{
			if (mMyStringArray[i] >= 65 && mMyStringArray[i] <= 90)
			{
				lower[i] = mMyStringArray[i] + 32;
			}
			else
				lower[i] = mMyStringArray[i];
		}
		//Tapes up the end of the array
		lower[MyStringLength()] = '\0';

		return MyString(lower);
	}

	MyString MyString::UpperCaseCopy()
	{
		char* upper = new char[255];
		for (int i = 0; i < MyStringLength(); i++)
		{
			if (mMyStringArray[i] >= 97 && mMyStringArray[i] <= 122)
			{
				upper[i] = mMyStringArray[i] - 32;
			}
			else
				upper[i] = mMyStringArray[i];
		}
		upper[MyStringLength()] = '\0';

		return MyString(upper);
	}

	bool MyString::WordSearch(MyString subMyString, int index)
	{
		int n = 0;
		for (int i = index; mMyStringArray[i] != '\0'; i++)
		{
			if (subMyString.mMyStringArray[n] == mMyStringArray[i])
			{
				n++;
				for (int iter = i + 1; mMyStringArray[iter] != '\0'; iter++)
				{
					if (subMyString.mMyStringArray[n] == '\0')
					{
						return true;
					}
					else if (mMyStringArray[iter] == subMyString.mMyStringArray[n])
					{
						n++;
						continue;
					}
					else if (mMyStringArray[iter] != subMyString.mMyStringArray[n])
					{
						n = 0;
						i = iter - 1;
						break;
					}
				}

			}
		}
		return false;
	}

	/*MyString MyString::ReplaceSubMyString(MyString replaceMyString,MyString subMyString, int index)
	{
		int n = 0;
		for (int i = index; mMyStringArray[i] != '\0'; i++)
		{
			if (replaceMyString.mMyStringArray[n] == mMyStringArray[i])
			{
				n++;
				for (int iter = i + 1; mMyStringArray[iter] != '\0'; iter++)
				{
					if (replaceMyString.mMyStringArray[n] == '\0')
					{
						
					}
					else if (mMyStringArray[iter] == replaceMyString.mMyStringArray[n])
					{
						int ind = iter;
						replaceMyString[n] = 
						n++;
						continue;
					}
					else if (mMyStringArray[iter] != replaceMyString.mMyStringArray[n])
					{
						n = 0;
						i = iter - 1;
						break;
					}
				}

			}
		}
		MyString newMyString;

		return MyString(newMyString);
	}*/

	std::istream& operator >> (std::istream& is, MyString & mMyStringArray)
	{
		char* something = new char[255];
		is >> something;
		mMyStringArray = something;
		return is;
	}

