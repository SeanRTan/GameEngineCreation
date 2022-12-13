// Program36_UsingReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Plus25(int& n);
int Minus25(int& n);

int main()
{
    int Num;
    int& rNum = Num;

    cout << "Please enter a number: ";
    cin >> Num;
    cout << Num << endl;
    Plus25(rNum);
    cout << Num << endl;
    Minus25(rNum);
    cout << Num << endl;
}

int Plus25(int& n)
{
    n += 25;
    return n;
}

int Minus25(int& n)
{
    n -= 25;
    return n;
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
