#include "BaseClasses.h"

Npc::Npc()
{
	cout << "�� ������� Npc" << endl;
}

void Npc::GetInfo()
{
	cout << "��� - " << name << endl;
	cout << "�������� - " << health << endl;
	cout << "���� - " << damage << endl;
}

Npc::~Npc()
{
	cout << "Npc ������" << endl;
}
