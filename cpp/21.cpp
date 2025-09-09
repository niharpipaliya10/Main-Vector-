#include<iostream>
using namespace std;
struct Family
{
     protected:
    int cash,gold;
    public:
    void set_data()
    {
        cout<<"Enter a data"<<endl;
        cin>>cash>>gold;
    }
    void get_data()
    {
        cout<<cash<<" "<<gold<<endl;
    }
};
int main()
{
    Family f;
    f.set_data();
    f.get_data();
    f.cash=10;
}