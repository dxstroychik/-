#include <windows.h>
#include <iostream>
#include "Warrior.h"
#include "Wizard.h"
#include "Paladin.h"
#include "Worldevil.h"


using namespace std;

class  Player {
public:
    void Create(Npc* player){
        player->Create();
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Warrior* warrior1 = new Warrior();
    Warrior* warrior2 = new Warrior();

    cout << (*warrior1 == *warrior2) << endl;;

    Wizard* wizard1 = new Wizard();
    Wizard* wizard2 = new Wizard();
    Wizard* megaWizard = new Wizard();

    *megaWizard = (*wizard1 + *wizard2);

    megaWizard->GetInfo();

    Paladin* paladin = new Paladin();


    Player* player = new Player();

    cout << "������, ������ \n ������� � ������ � �������� � ����\n";
    cout << "�� ������� ���? 1 - ����� ��������, 2 - ���������";
    unsigned short choise = 1;
    cin >> choise;
    while (choise > 2 || choise < 1)
    {
        cout << "�������� �� ������, ������� �����\n";
        cin >> choise;
    }

    /*if (choise == 1)
    {
        cout << "�������� � ����� �������\n\t 1 - ����\n\t2 - ���������\n\t3-�������";
        //_________________
        while (choise > 2 || choise < 1)
        {
            cout << "������ ��� �� ���� � ����� �����, ������� ��� ���\n";
            cin >> choise;
        }
        switch (choise)
        {
        case 1: {player->Create(&warrior1); }
        case 2: {player->Create(&wizard1); }
        case 3: {player->Create(&paladin); }
        }
        //_________________
    }*/


    return 0;
}