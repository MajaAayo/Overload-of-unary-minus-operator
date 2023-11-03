#include <iostream>
using namespace std;

class Space
{
private:
    int x;
    int y;
    int z;

public:
    Space(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout << "x= " << x << " ";
        cout << "y= " << y << " ";
        cout << "z= " << z << endl;
    }

    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main()
{
    Space obj(4, -5, -6);
    cout << " A: ";
    obj.display();
    -obj; //equivalent to A.operator-()
    cout << "-A: ";
    obj.display();
    return 0;
}

