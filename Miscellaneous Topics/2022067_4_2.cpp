#include <iostream>
using namespace std;

template <class Type>
class Test
{
private:
    Type arr[3]; // An array of type 'Type' with size 3

public:
    void input()
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i]; // Reading input values and storing them in the array
        }
    }

    void output()
    {
        cout << "The values in the array are as follows: " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i] << " "; // Printing the values in the array
        }
        cout << endl;
    }
};

int main()
{
    Test<int> x; // Creating an instance of the 'Test' class with 'int' as the template argument
    cout << "Enter three integers: " << endl;
    x.input(); // Calling the 'input' function of the 'x' object to read integers

    Test<char> y; // Creating another instance of the 'Test' class with 'char' as the template argument
    cout << "Enter three characters: " << endl;
    y.input(); // Calling the 'input' function of the 'y' object to read characters

    x.output(); // Calling the 'output' function of the 'x' object to print integers
    y.output(); // Calling the 'output' function of the 'y' object to print characters

    return 0;
}
