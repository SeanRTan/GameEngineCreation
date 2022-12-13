// Program35_ChangingPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void InputDetails(int* n1, int* n2);
void OutputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
    int num1 = 0;
    int num2 = 0;

    InputDetails(&num1, &num2);

    int* pNum = &num1;
    OutputDetails(num1, num2, pNum);
    cout << "\nChanging pointers..." << endl;
    pNum = &num2;
    OutputDetails(num1, num2, pNum);
}

void InputDetails(int* n1, int* n2)
{
    cout << "Please input a number: ";
    cin >> *n1;

    cout << "Please input a second number: ";
    cin >> *n2;
}

void OutputDetails(int& integer1, int& integer2, int* pointer)
{
    cout << integer1 << endl;
    cout << &integer1 << endl;
    cout << integer2 << endl;
    cout << &integer2 << endl;
    cout << pointer << endl;
    cout << *pointer << endl;
    cout << &pointer << endl;
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
