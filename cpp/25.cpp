#include<iostream>
using namespace std;
class A
{
    int x;
    friend int main();
    void get();
    public:
    void set(int);
    
};
void A::set(int data)
{
    x=data;
}
void A::get()
{
    cout<<x<<endl;
}
int main()
{
    A obj1;
    obj1.set(20);
    obj1.get();
}