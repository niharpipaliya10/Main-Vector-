/*5. Count , print factor of  11 .
   o/p:  count = 2  //  1  11*/

#include <stdio.h>
void main()
{
    int num, i, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
            printf("%d\n ", i);
        }
    }
    printf("%d", c);
}