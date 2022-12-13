// Program23_Inventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int Max_Items = 4;
    int numItems = 0;
    string Inventory[Max_Items];
    Inventory[numItems++] = "Sword";
    Inventory[numItems++] = "Battle Axe";
    Inventory[numItems++] = "Healing Potion";
    Inventory[numItems++] = "Dagger";
    char Choice;

    cout << "You have picked up a wizard's staff, would you like to swap it with your dagger?[Y/N]: ";
    cin >> Choice;
    
    if (Choice == 'Y' || Choice == 'y')
    {
        Inventory[Max_Items - 1] = "Dagger";
    }
    if (Choice == 'N' || Choice == 'n')
    {
        cout << "\n You chose to leave the wizard's staff behind\n" << endl;
    }
    for (int i = 0; i < Max_Items; i++)
    {
        cout << Inventory[i] << endl;
    }
}

//#include <iostream>
//using namespace std;
//void extractChar(string str)
//{
//    char ch;
//    int l = str.length();
//    for (int i = 0; i < l; i++) {
//        ch = str[i];
//        cout << ch << " ";
//    }
//}
//int main()
//{
//    string str = "welcomtoC++coding";
//    extractChar(str);
//    return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
