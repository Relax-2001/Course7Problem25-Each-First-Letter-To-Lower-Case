#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter your string \n";
	getline(cin , UserString);
	return UserString;
}

string EachFirstLetterToLowerCase(string & UserString)
{

	bool IsFirstLetter = true;

	for (short i = 0 ; i < UserString.length();i++)
	{

		if (UserString[i] != ' ' && IsFirstLetter)
		{
			UserString[i] = tolower(UserString[i]);
		}

		IsFirstLetter = (UserString[i] == ' ' ? true : false);

	}

	return UserString;

}

int main()
{

	string UserString = ReadString();

	cout << "\nString after conversion:\n";
	UserString = EachFirstLetterToLowerCase(UserString);
	cout << UserString << "\n";
}

