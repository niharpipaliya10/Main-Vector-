#include <iostream>
using namespace std;
class Family
{
    int cash,gold;
    public:
    void set_data()
    {
        cout<<" Enter a cash and gold value:"<<endl;
        cin>>cash>>gold;
    }
    void get_data()
    {
        cout<<"cash:"<<cash<<" "<<"gold"<<gold<<endl;
    }
};
int main()
{
    Family f1,f2;
    f1.set_data();
    f2.set_data();
    f1.get_data();
    f2.get_data();

}