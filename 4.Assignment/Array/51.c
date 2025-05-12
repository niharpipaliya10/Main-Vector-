/*
51. WAP  in C  to  delete odd palindrome number
from array .
      i/p:  int a[6]={22,141,222,45,33,77};
      o/p:  int a[6]={22,222,45};
*/
#include <stdio.h>
void main()
{
    int a[6];
    int ele, i, j, rev, r, temp, c = 0;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a array element of array:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {
        temp = a[i];
        for (rev = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            rev = rev * 10 + r;
        }
        if (rev == a[i])
        {

            if (a[i] % 2 != 0)
            {
                for (j = i; j < ele; j++)
                {
                    a[j] = a[j + 1];
                }
                ele--;
                i--;
            }
        }
    }
    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}