#include<iostream>
using namespace std;
int main()
{
    int *p;
    unsigned int n;
    cout<<"Enter no ele"<<endl;
    cin>>n;
    p=(int*)malloc(sizeof(int)*n);
    if(p==0)
    cout<<"memory not allocated"<<endl;
    else
    cout<<"memory allocated"<<endl;
}