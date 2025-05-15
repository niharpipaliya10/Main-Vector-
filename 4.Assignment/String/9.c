/*
9.WAP in C to check string lenght is strong or not.
        i/p:  char s[10]= ”vector”;
           o/p:   6  is  not  strong number
*/
#include <stdio.h>
void main()
{
    char s[10];
    int l, sum, mul, i, r, temp;
    printf("Enter a string:\n");
    scanf("%[^\n]s", s);
    for (l = 0; s[l]; l++)
        ;
    printf("%d", l);

    temp = l;
    for (sum = 0; l; l = l / 10)
    {
        r = l % 10;
        for (i = 1, mul = 1; i <= r; i++)
        {
            mul = mul * i;
        }
        sum = sum + mul;
    }
    if (sum == temp)
    {
        printf(" is strong number.\n");
    }
    else
    {
        printf(" is not strong number.\n");
    }
}