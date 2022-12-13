// Program28_StringsAndVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <string> Inventory;
    string UserChoice;
    int Choice;

    Inventory.push_back("sword");

    while (Inventory.size() != 3)
    {
        cout << "Type which item you wish to keep: Staff or Knife" << endl;
        getline(cin, UserChoice);

        if (UserChoice == "staff")
        {
            Inventory.push_back("staff");
        }
        else if (UserChoice == "knife")
        {
            Inventory.push_back("knife");
        }

        cout << "Your inventory holds: " << endl;
        for (int i = 0; i < Inventory.size(); i++)
        {
            cout << Inventory[i] << "\n";
        }
        


        cout << "Type which item you wish to keep: Healing potion or Fire Spell" << endl;
        getline(cin, UserChoice);

        if (UserChoice == "healing potion")
        {
            Inventory.push_back("healing potion");
        }
        else if (UserChoice == "fire spell")
        {
            Inventory.push_back("fire spell");
        }
        cout << "Your inventory holds: " << endl;
        for (int i = 0; i < Inventory.size(); i++)
        {
            cout << Inventory[i] << "\n";
        }
    }

    if (Inventory.size() >= 3)
    {
        cout << "\nYour inventory is full!\n" << endl;

        cout << "You have found a magic ring what would you like to replace in your inventory?\nChoice: " << endl;
        for (int i = 0; i < Inventory.size(); i++)
        {
            cout << i+1 << ": " << Inventory[i] << endl;
        }
        cout << "\n" << endl;
        cin >> Choice;

        Inventory[Choice - 1].replace(0, Inventory[Choice].size(), "magic ring");
    }

    cout << "\nInventory is now: " << endl;
    for (int i = 0; i < Inventory.size(); i++)
    {
        cout << Inventory[i] << "\n";
    }

    cout << "\nYou have been robbed!!" << endl;
    Inventory.clear();
    cout << "Inventory is now:" << endl;
    if (Inventory.size() == 0)
    {
        cout << "Empty!" << endl;
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
