#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;
    p=(int*)malloc(sizeof(p));
    cout<<"enster a data"<<endl;
    cin>>*p;
    cout<<"*p="<<*p<<endl;
    free(p);
}