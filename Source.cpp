#include <iostream>
#include <string>
#include "windows.h"
#include "BaseClass.h"
#include "StartClasses.h"
#include "fstream"
using namespace std;




class Product
{};

class Bread : Product
{
    public:Bread() { }
};

class Chips : Product
{
    public:Chips() { }
};

class Creator
{
public:virtual Product FactoryMethod() { } ;
};

class Bread : Creator
{
public: Product FactoryMethod() override { return new Bread(); };
};




























enum class ValueQuality 
{ 
    trash, common, rare, mythic, legendary 
};

enum class CharacterClass 
{
    Unknown = 0, Warrior, Wizard, Paladin
};

enum class MainMenu 
{ 
    NewGame, LoadGame, Exit 
};

enum class WeaponType
{ 
    Sword, Axe, Bow, Staff, Dagger 
};

enum class SpellType 
{ 
    Fireball, IceSpike, Lightning, Heal, Shield 
};

unsigned short TestChoise(unsigned short maxChoise, string text)
unique_ptr<Npc> CreateCharacter(CharacterType)

{
    switch (type)
    {
    case CaharcterType::Unknown:
        return make_unique<Warrior>();
    case CaharcterType::Unknown:
        break;
    }
}













struct Treasure
{
    string name{ "добыча" };
    ValueQuality quality{ ValueQuality::trash };
    unsigned int price{ 0 };

    Treasure(ValueQuality quality) : quality(quality)
    {
        switch (quality)
        {
        case ValueQuality::trash:
            cout << "Качество плохое\n";
            break;
        case ValueQuality::common:
            cout << "Качество средненькое\n";
            break;
        case ValueQuality::rare:
            cout << "Качество хорошее\n";
            break;
        case ValueQuality::mythic:
            cout << "Качество крутое\n";
            break;
        case ValueQuality::legendary:
            cout << "Качество идеальное\n";
            break;
        }
    }
};

struct Cloth : Treasure
{
    Cloth(ValueQuality quality) : Treasure(quality) {}
    string valueSite[5]{ "ботинки", "поножи", "нагрудник", "шлем", "наски" };
    string site{ "" };
    unsigned int armor{ 1 };
};



int main()
{
    setlocale(LC_ALL, ".UTF-8");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Cloth cloth(ValueQuality::mythic);
    cloth.armor = 10;
    cloth.site = cloth.valueSite[3];
    cloth.name = "Шлем властителя подземелий";
    cloth.price = 50;

    cout << "\n=== Информация о предмете ===\n";
    cout << cloth.name << '\n' << cloth.site << '\n' << cloth.armor << '\n' << cloth.price << "\n\n";


    Warrior* warrior = new Warrior();
    Warrior* warrior2 = new Warrior();
    cout << "Сравнение двух воинов: " << ((*warrior == *warrior2) ? "одинаковые" : "разные") << endl;

    Wizard* wizard = new Wizard();
    Paladin* paladin = new Paladin();
    Player* player = new Player();

    cout << "\nПривет, путник!\nПрисядь у костра и расскажи о себе.\n";
    cout << "Ты впервые тут? (1 - новый персонаж, 2 - загрузить)\n";

    unsigned short choice = 0;
    cin >> choice;

    while (choice < 1 || choice > 2)
    {
        cout << "Наверное ты ошибся, повтори снова\n";
        cin >> choice;
    }

    if (choice == static_cast<unsigned short>(MainMenu::NewGame))
    {
        cout << "Расскажи о своих навыках\n\t1 - Воин\n\t2 - Волшебник\n\t3 - Паладин\n";
        cin >> choice;

        while (choice < 1 || choice > 3)
        {
            cout << "Такого еще не было в наших краях. Повтори ввод.\n";
            cin >> choice;
        }

        switch (static_cast<CharacterClass>(choice))
        {
        case CharacterClass::Warrior:
            player->Create(warrior);
            delete wizard; wizard = nullptr;
            delete paladin; paladin = nullptr;
            break;

        case CharacterClass::Wizard:
            player->Create(wizard);
            delete warrior; warrior = nullptr;
            delete paladin; paladin = nullptr;
            break;

        case CharacterClass::Paladin:
            player->Create(paladin);
            delete warrior; warrior = nullptr;
            delete wizard; wizard = nullptr;
            break;
        }
    }
    else if (choice == static_cast<unsigned short>(MainMenu::LoadGame))
    {
        player->Load(warrior);
    }

    cout << "\nСделаем остановку тут?\n\t1 - сохранить игру\n\t2 - продолжить\n";
    cin >> choice;

    if (choice == 1)
    {
        if (warrior != nullptr) player->Save(warrior); 
        if (wizard != nullptr) player->Save(wizard);
        if (paladin != nullptr) player->Save(paladin);
    }

    delete warrior;
    delete wizard;
    delete paladin;
    delete player;

    return 0;
}
            
