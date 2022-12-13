// Program12_IfThisThenThat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;
    int Choice1;
    int Choice2;

    cout << "is it raining or snowing?[1/2]:" << endl;
    cin >> Choice1;
    cout << "what is the temperature in celsius" << endl;
    cin >> Choice2;

    if (Choice1 == 1)
    {
        if (Choice2 > 15)
        {
            cout << "wear a light raincoat" << endl;
        }
        else
        {
            cout << "wear a thick coat" << endl;
        }
    }
    if (Choice1 == 2)
    {
        if (Choice2 > 5)
        {
            cout << "wear something warm" << endl;
        }
        else if (Choice2 > 0)
        {
            cout << "wrap up well" << endl;
        }
        else
        {
            cout << "stay at home bruv" << endl;
        }
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
