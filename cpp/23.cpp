#include <iostream>
using namespace std;
class Family
{
    int cash,gold;
    public:
    void set_data()
    {
        cout<<" Enter a cash and gold value:"<<this<<endl;
        cin>>this->cash>>this->gold;
    }
    void get_data()
    {   cout<<"get_fun"<<this<<endl;
        cout<<"cash:"<<cash<<" "<<"gold"<<gold<<endl;
    }
};
int main()
{
    Family f1,f2;
    cout<<"&f1="<<&f1<<endl;
     cout<<"&f2="<<&f2<<endl;
    f1.set_data();
    f2.set_data();
    f1.get_data();
    f2.get_data();

}