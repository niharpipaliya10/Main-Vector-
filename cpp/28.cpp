#include <iostream>
using namespace std;
class B;
class A
{
    int x;
    void display();

public:
    void set(int d1)
    {
        x = d1;
    }
    friend class B;
};
void A::display()
{
    cout << x << endl;
}
class B
{
    public:
    void show(A t)
    {
        t.display();

    }
};
int main()
{
    A obj1;
    obj1.set(20);
    B obj2;
    obj2.show(obj1);
}