/*WAP to print digits of a given number in the form words.
Ex-1:
i/p:  int num=1203;
o/p:  digits of given numbers are :  one two zero three; */
#include <stdio.h>
void main()
{
    int num, rev = 0, r, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (1; num; num = num / 10)
    {
        r = num % 10;
        rev = rev * 10 + r;
    }
    //  printf("%d", rev);
    

    for (1; rev = rev / 10)
    {
        r = rev % 10;
        if (r == 1)
        {
            printf(" one ");
        }
        else if (r == 2)
        {
            printf(" two ");
        }
        else if (r == 3)
        {
            printf(" three ");
        }
        else if (r == 4)
        {
            printf(" four ");
        }
        else if (r == 5)
        {
            printf(" five ");
        }
        else if (r == 6)
        {
            printf(" six ");
        }
        else if (r == 7)
        {
            printf(" seaven ");
        }
        else if (r == 8)
        {
            printf(" eight ");
        }
        else if (r == 9)
        {
            printf(" nine ");
        }
        else if (r == 0)
        {
            printf(" zero");
        }
    }
}