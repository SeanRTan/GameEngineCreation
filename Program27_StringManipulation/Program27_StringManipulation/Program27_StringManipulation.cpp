// Program27_StringManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string testString = "Do you know who loves C++ XX does!";
    string Name;

    cout << "Enter a name: ";
    getline(cin, Name);
    int NameLength = Name.length();

    testString.insert(27, Name, 0, NameLength);
    cout << testString << "\n" << endl;

    testString.replace(25, 2, " ");
    testString.replace(26 + NameLength, 2, " ");
    cout << testString << "\n" << endl;

    cout << "Enter a longer name: ";
    getline(cin, Name);
    testString.replace(26, NameLength, Name);
    cout << testString << "\n" << endl;
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
