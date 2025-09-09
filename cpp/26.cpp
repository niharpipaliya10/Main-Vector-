#include <iostream>
using namespace std;
class A
{
    int x, y;
    friend void add(A);
    friend void sub(A *);

public:
    void set(int d1, int d2)
    {
        x = d1;
        y = d2;
    }
};

void add(A t)
{
    cout << t.x + t.y << endl;
}
void sub(A *t1)
{
    cout << (t1->x - t1->y) << endl;
}
int main()
{
    A obj1, obj2;
    obj1.set(10, 20);
    obj2.set(4, 20);
    add(obj1);
    sub(&obj2);
}