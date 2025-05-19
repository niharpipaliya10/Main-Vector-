/*
WAP in C using Recursive  function to count set
bit in given num.  //  pass address of variable
i/p:   n=  63     o/p:   count: 6
     int   rec_fun_count( int  * );
*/
#include <stdio.h>
int rec_fun_count(int *);
void main()
{
    int num, count;
    printf("Enter a number:\n");
    scanf("%d", &num);
    count = rec_fun_count(&num);
    printf("count =%d\n", count);
}
int rec_fun_count(int *p)
{
    static int pos = 31, m, c;
    if (pos >= 0)
    {
        m = *p >> pos & 1;
        if (m)
            c++;
        pos--;
        rec_fun_count(p);
    }
    return c;
}