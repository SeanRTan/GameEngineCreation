// Program29_RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int PlayerWins = 2;
	int BotWins = 2;
	string PlayerPick;
	int PlayerChoice, BotChoice;
	bool GameEnd = false;
	
	srand(time(NULL));

	while (GameEnd == false)
	{
		cout << "Enter your selection: ";
		cin >> PlayerPick;
		if (PlayerPick == "rock")
		{
			PlayerChoice = 0;
		}
		else if (PlayerPick == "paper")
		{
			PlayerChoice = 1;
		}
		else if (PlayerPick == "scissors")
		{
			PlayerChoice = 2;
		}

		cout << "The Computer chose: ";
		BotChoice = rand() % 3;
		if (BotChoice == 0)
		{
			cout << "rock";
		}
		else if (BotChoice == 1)
		{
			cout << "paper";
		}
		else if (BotChoice == 2)
		{
			cout << "scissors";
		}

		if (PlayerChoice == BotChoice)
		{
			cout << "\nIt was a draw" << endl;
		}
		else if (PlayerChoice == 0 && BotChoice == 2)
		{
			cout << "\nCongratulations, you win" << endl;
			PlayerWins--;
		}
		else if (PlayerChoice == 1 && BotChoice == 0)
		{
			cout << "\nCongratulations, you win" << endl;
			PlayerWins--;
		}
		else if (PlayerChoice == 2 && BotChoice == 1)
		{
			cout << "\nCongratulations, you win" << endl;
			PlayerWins--;
		}
		else
		{
			cout << "\nUnfortunate, you lost" << endl;
			BotWins--;
		}

		cout << "You need : " << PlayerWins << " to complete the game." << endl;
		cout << "The computer needs : " << BotWins << " to complete the game." << endl;
		cout << "*********************" << endl;
		if (PlayerWins == 0)
		{
			GameEnd = true;
		}
		if (BotWins == 0)
		{
			GameEnd = true;
		}
	}
	if (PlayerWins == 0)
	{
		cout << "Congratulations you won..."<< endl;
	}
	if (BotWins == 0)
	{
		cout << "Unfortunate, you've lost..." << endl;
	}
	cout << "Game over...";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
