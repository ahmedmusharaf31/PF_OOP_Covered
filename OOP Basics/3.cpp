#include <iostream>
#include <string>
#include <bitset>
#define odd 1
#define even 0
using namespace std;
struct Student
{
    string name;
    int age, marks[5], passkey[6];
    void detail_get()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};
int main()
{
    Student student;
    student.detail_get();
    student.passkey[0] = student.name.length();
    if (student.age & 1)
    {
        cout << "The number is odd." << endl;
    }
    else
    {
        cout << "The number is even." << endl;
    }
    return 0;
}
