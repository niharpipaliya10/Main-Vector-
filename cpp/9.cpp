#include<iostream>
using namespace std;
int main()
{
int x=10,y=20;
int *p=&x;
int *q=&y;

int *&rp=p;
int *&rq=q;
rq=rp;
cout<<*rq<<" "<<*q<<endl;




// int x=10;
// int *p=&x;
// int *&rp=p;
// cout<<p<<" "<<rp<<endl;
// cout<<*p<<" "<<*rp<<endl;





// int a[5]={10,20,30,40,50};
// // int (&ra)[5]=a;
// int (&ra)[3]=a;
// for(int i=0;i<5;i++)
// {
//     cout<<ra[i]<<endl;
// }


// int x=10;
// int &rv=x;
// int &rv1=x;
// int &rv2=x;
//  cout<<x<<" "<<rv<<" "<<rv1<<" "<<rv2<<endl;


    // int x=10;
    // const int &rv=x;
    // // rv=30;
    // x=30;
    // cout<<x<<" "<<rv<<endl;

// const int x=10;
// // int &rv=x;
// const int &rv=x;
// cout<<x<<" "<<rv<<endl;

    // int &rv=0;
    // const int &rv=0;


// int x=10,y=20;
// int &rv=x;
// int &rv=y;
// cout<<x<<" "<<rv<<endl;


// int x=10;
// int &rv;
// cout<<x<<" "<<rv<<endl;



// int x=10,y=30;
// int &rv=x;
// rv=y;
// cout<<x<<" "<<rv<<endl;
//  cout<<&x<<" "<<&rv<<endl;

// int x=10;
// int &rv=x;
// cout<<x<<" "<<rv<<endl;
// cout<<&x<<" "<<&rv<<endl;

}
