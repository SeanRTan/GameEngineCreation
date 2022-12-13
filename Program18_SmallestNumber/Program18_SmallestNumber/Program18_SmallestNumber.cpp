// Program18_SmallestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void SmallestNumber(int a, int b)
{
    if (a < b)
    {
        cout << a << " is the smallest number" << endl;
    }
    else if (a > b)
    {
        cout << b << " is the smallest number" << endl;
    }
    else
    {
        cout << a << " and " << b << " are the same number" << endl;
    }

}
int MultiplyBy10(int c)
{
    c *= 10;
    return c;
}

void DivideBy3(float d)
{
    cout << d << " divided by 3 = " << d / 3 << endl;
}

int main()
{
    int num1, num2, num3;
    float num4;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter your first number: " << endl;
        cin >> num1;
        cout << "Enter your second number: " << endl;
        cin >> num2;
        SmallestNumber(num1, num2);
    }

    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter your number to be multiplied: " << endl;
        cin >> num3;
        num4 = MultiplyBy10(num3);
        DivideBy3(num4);
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
