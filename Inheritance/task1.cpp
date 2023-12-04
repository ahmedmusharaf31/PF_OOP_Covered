#include <iostream>
using namespace std;
class Move
{
protected:
    int position;

public:
    Move()
    {
        position = 0;
    }
};
class Move2 : public Move
{
public:
    void forward()
    {
        position++;
    }
    void backward()
    {
        position--;
    }
    void show()
    {
        cout << "Position: " << position << endl;
    }
};
int main()
{
    Move2 p1;
    p1.show();
    p1.forward();
    p1.show();
    p1.backward();
    p1.show();
    return 0;
}
