/*print 3 to power 4 .
 o/p: 3*3*3*3 // 81
*/
#include <stdio.h>
void main()
{2
    int num, i;
    printf("Enter a number:\n");
    scanf("%d", &num);
    

    for (i = 1; i <3; i++)
    {
        num = num * num;
    }
    printf("%d", num);
}