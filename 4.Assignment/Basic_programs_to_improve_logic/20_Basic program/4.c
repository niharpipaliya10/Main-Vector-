/*4. Count factor of 12 .
 o/p: count = 6 */
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
            // printf("%d ", i);
        }
    }
    printf("%d", c);
}
