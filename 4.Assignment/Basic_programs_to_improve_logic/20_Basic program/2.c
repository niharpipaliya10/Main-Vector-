/*int factor of 12.
 o/p: 1 2 3 4 6 12 */
#include <stdio.h>
void main()
{
    int num, i;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
}