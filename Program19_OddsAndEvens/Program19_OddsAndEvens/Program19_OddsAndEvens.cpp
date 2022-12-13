// Program19_OddsAndEvens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int NumOfOdd;
int OddTotal;
int NumOfEven;
int EvenTotal;

bool IsEven(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is an even number\n\n";
        return true;
    }
    else
    {
        cout << num << " is an odd number\n\n";
        return false;
    }

}

void outputResults(int NumOfOdd, int OddTotal, int NumOfEven, int EvenTotal)
{
    cout << "You entered " << NumOfOdd << " odd numbers which totaled up to " << OddTotal << endl;
    cout << "You entered " << NumOfEven << " even numbers which totaled up to " << EvenTotal << endl;
}

int main()
{
    int Choice;
    bool Check;
    for (int i = 0; i < 10; ++i)
    {
        cout << "Please enter number: ";
        cin >> Choice;
        Check = IsEven(Choice);
        if (Check == true)
        {
            NumOfEven++;
            EvenTotal += Choice;
        }
        else
        {
            NumOfOdd++;
            OddTotal += Choice;
        }
    }

    outputResults(NumOfOdd, OddTotal, NumOfEven, EvenTotal);

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
