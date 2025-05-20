/*
4.
WAP in C using Recursive fun to reverse bits .
    i/p  :   n=   31
00000000   00000000  00000000  00011111
       o/p:    //  print binary in main function
11111000   00000000  00000000  00000000
     int  rec_fun_rev_bit ( int   );
      void  rec_fun_binary ( int   );

*/
#include <stdio.h>
int rec_fun_rev_bit(int);
void rec_fun_binary(int);
void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    rec_fun_binary(n);
    n = rec_fun_rev_bit(n);
    printf("\n");
    rec_fun_binary(n);
    printf("\n");
}
int rec_fun_rev_bit(int n)
{
    static int i = 0, j = 31;
    int m, p;
    if (i < j)
    {
        m = n >> i & 1;
        p = n >> j & 1;
        if (m != p)
        {
            n = n ^ 1 << i;
            n = n ^ 1 << j;
        }
        i++;
        j--;
        return rec_fun_rev_bit(n);
    }
    return n;
}
void rec_fun_binary(int n)
{
    static int pos = 31;
    if (pos >= 0)
    {

        printf("%d", n >> pos & 1);

        if (pos % 8 == 0)
            printf(" ");
        pos--;

        rec_fun_binary(n);
    }
    else
    {
        pos = 31;
    }
}