#pragma once
#include <iostream>

using namespace std;
#include "BaseClass.h"
#include <string>
string Npc::GetName()
{
    return name;
}
unsigned int Npc::GetHealth()
{
    return health;
}
float Npc::GetDamage()
{
    return damage;
}
unsigned int Npc::GetLvl()
{
    return lvl;
}
void Npc::GetInfo() //метод класса
{
    cout << "»м€ - " << name << endl;
    cout << "«доровье - " << health << endl;
    cout << "”рон - " << damage << endl;
}
bool Npc::Save()
{

    ofstream saveSystem("save.bin", ios::binary);
    if (saveSystem.is_open())
    {
        saveSystem.write(reinterpret_cast<const char*>(&name), sizeof(name));
        saveSystem.write(reinterpret_cast<const char*>(&health), sizeof(health));
        saveSystem.write(reinterpret_cast<const char*>(&damage), sizeof(damage));
        saveSystem.write(reinterpret_cast<const char*>(&lvl), sizeof(lvl));
        saveSystem.close();
        return true;
    }
    else
    {
        cout << "сохранение не удалось" << endl;
        return false;
    }
    saveSystem.close();
};
Npc Npc::Load()
{
    ifstream loadSystem("save.bin", ios::binary);
    Npc npc; //временное хранилище дл€ считывани€ данных из файла
    if (loadSystem.is_open())
    {
        loadSystem.read(reinterpret_cast<char*>(&npc.name), sizeof(npc.name));
        loadSystem.read(reinterpret_cast<char*>(&npc.health), sizeof(npc.health));
        loadSystem.read(reinterpret_cast<char*>(&npc.damage), sizeof(npc.damage));
        loadSystem.read(reinterpret_cast<char*>(&npc.lvl), sizeof(npc.lvl));
    }
    else
    {
        cout << "св€зь с базой нарушена\nѕам€ть утерена" << endl;
        return npc;
    }
    loadSystem.close();
    return npc;
    ckas Wizard : public virtual Npc
    {
        class Spell
        {
        protected:
            string name{ "заклинание" };
            unsigned short damage { 0 };
            unsigned short price { 0 };
            bool isCurse{ false };
            it time{ 0 };
        public:
            Spell(string name)
                unsigned short price = 0, bool isCurse = false, int time = 0)
                {
                    this -> = name;
                    this -> = price;
                    this -> = isCurse;
                    this -> = time;
                }

                string operator[](unsined index) const
                {
                    switch (index)
                    {
                    case 0: return name; break;
                    case 1: return to_string(damage) : break;
                    case 2: return to_string(price); break;
                    case 3:
                    {
                        if (isCurse)
                        {
                            return "переодичный урон";
                        }
                        else {
                            return "произносимое заклинание";
                        }
                        break;
                    }

                    case 4: return to_string(timeCast); break;
                        return isCurse ? "Длительность негативного эффекта - " + to_string(timeCast) :
                        "Длительность приминения - " + to_string(timeCast);
                        break;
                    default:return "такого свойства заклинаний не существует";
                        break
                    }

                    default:





        unsigned short CastSpell()

        {
            cout << "Вы применили " << name << " на противника" << endl;
        }
    };
}
protected:
    unsigned short intellect = 27;
    Spell spells[5] = {
    Spell("огненый шар", 20,50,false,3),
    Spell("стрелы", 10,20,false,1),
    Spell("бездна", 20,30,false),
    Spell("торнадо", 5,10, true,5),
    Spell("гоблинское прокллятье",15,20,false,10),
    };






public:
    Wizard();
    Wizard(string name, unsigned int health, float damage);
    void GetInfo() override :
    voide create() override
