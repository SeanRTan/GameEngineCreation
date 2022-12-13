// Program11_DoomDifficultyMenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int Choice;
    cout << "Please choose your difficulty\n[1]I'm Too Young To Die!\n[2]Hey, not too rough!\n[3]Hurt me plenty.\n[4]Ultra-Violence.\n[5]Nightmare..." << endl;
    cin >> Choice;

    switch (Choice)
    {
        case 1:
            cout << "Awww wittwe baby" << endl;
        break;

        case 2:
            cout << "You man child" << endl;
        break;

        case 3:
            cout << "Little boy scout is feeling brave isnt he" << endl;
        break;
             
        case 4:
            cout << "Now thats more like it" << endl;
        break;

        case 5:
            cout << "Time for a good ol massacre" << endl;
        break;

        default:
            cout << "pick a valid number dammit" << endl;
        break;
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
