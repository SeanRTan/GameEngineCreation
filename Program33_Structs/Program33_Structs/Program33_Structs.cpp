// Program33_Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    struct UserInfo
    {
        string Name;
        int Age;
        string TelephoneNumber;
        void OutputDetails()
        {
            cout << "\nName: " << Name << endl;
            cout << "Age: " << Age << endl;
            cout << "Telephone Number: " << TelephoneNumber << endl;
        }
    };
    
    UserInfo UserDetails;    
    cout << "Please enter a name: ";
    getline(cin, UserDetails.Name);
    cout << "Please enter an age: ";
    cin >> UserDetails.Age;
    cout << "Please enter a Telephone Number: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, UserDetails.TelephoneNumber);

    UserDetails.OutputDetails();
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
