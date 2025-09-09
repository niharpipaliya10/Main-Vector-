#include <iostream>
using namespace std;
void swap_data(int &a, int &b)
{
    cout << "call by reference" << endl;
    int t;
    t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 10, b = 20;
    swap_data(a, b);
    cout << a << " " << b << endl;
}
