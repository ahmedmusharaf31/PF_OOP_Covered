#include <iostream>
using namespace std;
class Person
{
protected:
    int id;
    string name, address;

public:
    Person() = default;
    void input()
    {
        cout << "Enter your ID: ";
        cin >> id;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your address: ";
        cin >> address;
    }
    void display()
    {
        cout << "Entered details are: " << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};
class Student : public Person
{
private:
    int rollnum, marks;

public:
    Student()
    {
        Person(); // scope resolution operator used without the case of inheritance
        rollnum = 0;
        marks = 0;
    }
    void get_edu()
    {
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter Roll No: ";
        cin >> rollnum;
    }
    void show_edu()
    {
        cout << "Your educational details are: \n";
        cout << "Roll No: " << rollnum << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Student s;
    s.input();
    s.get_edu();
    s.display();
    s.show_edu();
    return 0;
}
