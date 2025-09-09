#include<iostream>
using namespace std;
int& func()
{
    static int k=100;
    cout<<"k value"<<k<<endl;
    return k;
}
int main()
{
    int a=10;
    func()=a;
    func();
}