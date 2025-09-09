#include<iostream>
using namespace std;
int x=100;
int main()
{
int x=10;
{
    int x=1000;
    cout<<"local:"<<x<<endl;
    cout<<"global:"<<::x<<endl;
}


}