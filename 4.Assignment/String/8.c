/*
8.WAP in C to check string lenght is prime or not.
        i/p:  char s[10]= ”pawan”;
        o/p:   yes   5  is  prime number

*/
#include <stdio.h>
void main()
{
    char s[10];
    int l, i, c = 0;
    printf("Enter a string:\n");
    scanf("%[^\n]s", s);
    for (l = 0; s[l]; l++)
        ;
    printf("%d\n", l);
    l = l;
    for (i = 2; i < l; i++)
    {
        if (l % i == 0)
        {
            break;
        }
    }
    if (l == i)
    {
        printf("Yes %d  is prime .", l);
    }
    else
    {
        printf("No %d is not prime.", l);
    }
}