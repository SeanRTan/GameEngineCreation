// Program22_OrderedOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int ChoiceNumbers[5];
    int TempChoiceNumbers[5];
    int TempBiggest;
    int TempPos;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Please input a number: ";
        cin >> ChoiceNumbers[i];
        TempChoiceNumbers[i] = ChoiceNumbers[i];
    }

    std::sort(TempChoiceNumbers, TempChoiceNumbers + 5);
    cout << "\n\nAscending : ";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << TempChoiceNumbers[i];
    }

    std::sort(TempChoiceNumbers, TempChoiceNumbers + 5, greater<int>());
    cout << "\n\nDescending : ";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << TempChoiceNumbers[i];
    }

    TempBiggest = ChoiceNumbers[0];
    TempPos = 0;

    for (int i = 1; i < 5; i++)
    {
        if (ChoiceNumbers[i] > TempBiggest)
        {
            TempBiggest = ChoiceNumbers[i];
            TempPos = i;
        }
    }
    cout << "\n\nThe largest number in the array is " << TempBiggest << " at position " << TempPos;
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
