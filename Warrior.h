#pragma once
#include "BaseClasses.h"
#include <iostream>

using namespace std;

class Warrior : virtual public Npc
{
protected:
    unsigned short strenght{ 31 };
    string weapons[4] = { "������", "�������", "������", "���" };
public:

    Warrior();
    Warrior(string name, unsigned int health, float damage);
    void GetWeapons();
    void GetInfo() override;
    void Create() override;
    //���������� ��������� ���������(==)
    bool operator == (const Warrior& warrior)
    {
        return ((warrior.damage == this->damage) && (warrior.health == this->health)
            && (warrior.strenght == this->strenght));
    }
    ~Warrior();

};