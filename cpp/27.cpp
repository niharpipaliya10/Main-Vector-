#include <iostream>
using namespace std;
class B;
class A
{
    int x;
    friend void add(A, B);

public:
    void set_A(int d1)
    {
        x = d1;
    }
};
class B
{
    int y;
    friend void add(A, B);

public:
    void set_B(int d2)
    {
        y = d2;
    }
};
void add(A ao, B bo)
{
    cout << ao.x + bo.y << endl;
}
int main()
{
    A obj1;
    B obj2;
    obj1.set_A(20);
    obj2.set_B(40);
    add(obj1, obj2);
}