//allocate memory using new operatore
#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    cout<<"Enter a data"<<endl;
    cin>>*p;
    cout<<"*p ="<<endl;
    delete p;
     cout<<"*p ="<<endl;
}