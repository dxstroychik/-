#include "Worldevil.h"

Worldevil::Worldevil(string n, int h, float d, unsigned short l, bool isA) :name(n), health(h), damage(d), lvl(l), isAlive(isA)
{

}
Worldevil::Worldevil() : Worldevil("������", 1, 1, 1, true)
{
	cout << "��������" << endl;
}
Worldevil::Worldevil(string n) : Worldevil(n, health, damage, lvl, isAlive)
{
	cout << "������ " << n << endl;
}
Worldevil::Worldevil(string n, int h) : Worldevil(n, h, damage, lvl, isAlive)
{
	cout << "������ " << n << " ��: " << h << endl;
}
Worldevil::~Worldevil()
{
	cout << "������� �������� " << name << "��������";
}
;
