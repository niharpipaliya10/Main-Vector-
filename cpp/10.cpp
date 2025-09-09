#include<iostream>
using namespace std;
void swap_data(int *a,int *b)
{
    cout<<"call by address"<<endl;
int n;
n=*a;
*a=*b;
*b=n;
}
int main()

{int x=10,y=20;
    swap_data(&x,&y);
cout<<x<<" "<<y<<endl;



}