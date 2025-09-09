// value print in dec,oct,hex
#include<iostream>
using namespace std;

int main()
{
cout<<showbase<<uppercase<<showpos;
int x;
cout<<"Enter a x vlue "<<endl;
cin>>x;
cout<<"x value:"<<x<<endl;
cout<<"octal value:"<<oct<<x<<endl;
cout<<"hexadecimal:"<<hex<<x<<endl;
}