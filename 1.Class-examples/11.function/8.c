// call by value and call by refernce example.
#include <stdio.h>
void abc(int);
// void def(int *);
void def(int *p) // if we wriete function defination above the main function so we not declare function.
{
    *p = 20;
};
void main()
{
    int i = 10;
    abc(i);
    def(&i);
    printf("after function call i=%d:", i);
}
void abc(int i) // call by value
{
    i = 20;
}
// void def(int *p)
// {
//     *p = 20;
// }