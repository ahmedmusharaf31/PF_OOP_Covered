#include <iostream>
using namespace std;
class Character
{
public:
    virtual void move()
    {
        cout << "Character moves..." << endl;
    }
    virtual void attack()
    {
        cout << "Character attacks..." << endl;
    }
};
class Hero : virtual public Character
{
public:
    void move()
    {
        cout << "Hero moves swiftly..." << endl;
    }
    void attack()
    {
        cout << "Hero attacks fiercely..." << endl;
    }
};
class Villain : virtual public Character
{
public:
    void move()
    {
        cout << "Villain breaches stealthily..." << endl;
    }
    void attack()
    {
        cout << "Villain launches a deadly attack..." << endl;
    }
};
class AnyCharacter : public Hero, public Villain
{
public:
    void move()
    {
        cout << "AnyCharacter moves unpredictably..." << endl;
    }
    void attack()
    {
        cout << "AnyCharacter delivers a devastating blow..." << endl;
    }
};
int main()
{
    Character *character1 = new Hero;
    character1->move();
    character1->attack();
    Character *character2 = new Villain;
    character2->move();
    character2->attack();
    Character *character3 = new AnyCharacter;
    character3->move();
    character3->attack();
    return 0;
}
