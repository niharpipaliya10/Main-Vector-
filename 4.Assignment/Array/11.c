/*
11.WAP in C to count -ve ,+ve, even , odd  ele in array .
  i/p:  int a[10]={-11,11,12,-12,9,8,-3,10,22};
  o/p:   +ve = 6 , -ve = 3 , odd = 2 , even = 4
*/
#include <stdio.h>
void main()
{
    int a[9];
    int i, pos, b = 0, c = 0, d = 0, e = 0;
    printf("enter ele of array:\n");
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++)
    {

        if (a[i] >= 0)
        {
            c++;
            if (a[i] % 2 == 0)
            {
                b++;
            }
            else
            {
                e++;
                // printf(" %d", a[i]);
            }
        }
        else
        {
            d++;
        }
    }
    printf("\n+ve=%d,-ve=%d,even=%d,odd=%d", c, d, b, e);
}