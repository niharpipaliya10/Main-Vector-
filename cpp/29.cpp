#include<iostream>
using namespace std;
class emp;
class hr{
    public:
    void show_salary(emp);
};
class emp
{
    float sal;
    public:
    void set(float f)
    {
        sal=f;
    }
    friend void hr::show_salary(emp);
};
void hr::show_salary(emp e)
{
    cout<<e.sal<<endl;

}
int main()
{
    hr h;
    emp eo;
    eo.set(23453.67f);
    h.show_salary(eo);
}