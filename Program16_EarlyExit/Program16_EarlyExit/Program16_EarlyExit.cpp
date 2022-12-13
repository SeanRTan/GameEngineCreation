// Program16_EarlyExit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int playerLife = 100;
    int damage;
    int Count = 1;
    while(Count != 11)
    {
        cout << "\nHP Left: " << playerLife << endl;
        std::cout << "Question " << Count << ": How much damage shall I deal?\n";
        cin >> damage;
        playerLife -= damage;
        if (playerLife <= 0)
        {
            cout << "\nEarly end. Player Died!" << endl;
            break;
        }
        Count++;
    }
    if (playerLife > 0 && Count == 11)
    {
        cout << "\nAll questions asked. Player Survived!" << endl;
    }
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
