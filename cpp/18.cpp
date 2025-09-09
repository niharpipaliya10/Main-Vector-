#include<iostream>
using namespace std;
int main()
{
    int **p,i,j;
    p=new int*[3];
    for(i=0;i<3;i++)
    {
        p[i]=new int[4];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>p[i][j];
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<p[i][j];
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        delete []p[i];
    }
    delete [] p;
}