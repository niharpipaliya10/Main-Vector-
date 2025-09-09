#include<iostream>
using namespace std;
int x=10;
int main()
{
int x=10;
cout<<"local x:"<<x<<endl;
cout<<"global x:"<<::x<<endl;

}