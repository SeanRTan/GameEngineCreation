// Program25_Initials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char InitialsArray[15];
	cout << "Please input your initials using spaces: ";
	cin.getline(InitialsArray, 15);

	for (size_t i = 0; i < 15; i++)
	{
		if (InitialsArray[i] == '\0')
		{
			break;
		}

		else if (InitialsArray[i] == ' ')
		{
			cout << "\n";
		}

		else
		{
			cout << InitialsArray[i];
		}
	}
}
