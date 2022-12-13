// Program20_SimpleTextBattle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int PlayerHP = 1000;
int EnemyHP = 2000;

bool Playing = true;

void AttackChoice(int choice)
{
    const int SwordDMG = 300, MagicDMG = 650, AxeDMG = 450, TrollSwordDMG = 350, TrollMagicDMG = 50, TrollAxeDMG = 100;
    
    switch (choice)
    {
        case 1:
        {
            EnemyHP -= SwordDMG;
            PlayerHP -= TrollSwordDMG;
            cout << "You slashed the troll" << endl;
            cout << "The troll has slashed you\n" << endl;
            if (PlayerHP < 0)
                PlayerHP = 0;
            if (EnemyHP < 0)
                EnemyHP = 0;
            cout << "Player HP: " << PlayerHP << endl;
            cout << "Troll HP: " << EnemyHP << endl;
        }
        break;

        case 2:
        {
            EnemyHP -= MagicDMG;
            PlayerHP -= TrollMagicDMG;
            cout << "You blasted the troll with magic" << endl;
            cout << "The troll blasted you with magic\n" << endl;
            if (PlayerHP < 0)
                PlayerHP = 0;
            if (EnemyHP < 0)
                EnemyHP = 0;
            cout << "Player HP: " << PlayerHP << endl;
            cout << "Troll HP: " << EnemyHP << endl;
        }
        break;

        case 3:
        {
            EnemyHP -= AxeDMG;
            PlayerHP -= TrollAxeDMG;
            cout << "You cleaved the troll" << endl;
            cout << "The troll has cleaved you\n" << endl;
            if (PlayerHP < 0)
                PlayerHP = 0;
            if (EnemyHP < 0)
                EnemyHP = 0;
            cout << "Player HP: " << PlayerHP << endl;
            cout << "Troll HP: " << EnemyHP << endl;
        }
        break;
    }
        
}

bool PlayState()
{
    char PlayAgain;

    if (EnemyHP <= 0)
    {
        cout << "\nYou've defeated the troll!\nPlay Again?[y/n]: ";
        cin >> PlayAgain;
        if (PlayAgain == 'y')
        {
            PlayerHP = 1000;
            EnemyHP = 2000;
        }
        else
            return Playing = false;
    }
    if (PlayerHP <= 0)
    {
        cout << "\nYOU'VE DIED\nPlay Again?[y/n]: ";
        cin >> PlayAgain;
        if (PlayAgain == 'y')
        {
            PlayerHP = 1000;
            EnemyHP = 2000;
        }
        else
            return Playing = false;
    }
    return false;
}

int main()
{
    int UserChoice;
    cout << "A troll appears in your way!" << endl;

    while (Playing == true)
    {
        cout << "\n[1] Sword Attack\n[2] Magic Attack\n[3] Axe Attack\nChoice: ";
        cin >> UserChoice;
        AttackChoice(UserChoice);
        PlayState();
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
