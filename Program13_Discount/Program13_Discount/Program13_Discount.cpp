// Program13_Discount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char Status;
    int GameChoice;

    cout << "What is your status?[s/t/o]:";
    cin >> Status;

    cout << "Which game would you like?[1/2]:";
    cin >> GameChoice;

    if (Status == 's' && GameChoice == 1 || Status == 't' && GameChoice == 1)
        cout << "You can get a 20% discount";
    else if (Status == 's' && GameChoice == 2 || Status == 't' && GameChoice == 2)
        cout << "You can get a 10% discount";
    else
        cout << "Sorry, you are not eligible to a discount";

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
