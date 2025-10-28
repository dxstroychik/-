#pragma once
#ifndef PALADIN_H
#define PALADIN_H

#include "Warrior.h"
#include "Wizard.h"
#include "BaseClasses.h"
#include <iostream>

class Paladin : public Warrior, public Wizard //������������� ������������
    //������ �������� ������������� ����� 
{
public:

    Paladin();
    void GetInfo() override;
    void Create() override;
    ~Paladin();
};

#endif // !PALADIN_H
