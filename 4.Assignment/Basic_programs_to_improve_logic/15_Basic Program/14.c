/*14. Delete 5thbitinnum.
 i/p: intn=99 o/p:35*/
#include <stdio.h>
void main()
{
    int num, r1, r2;
    printf("Enter a number:");
    scanf("%d", &num);
    printf(" %d\n", num);
    r1 = num << 27;
    r1 = r1 >> 27;
    r2 = num >> 6;
    r2 = r2 << 5;
    num = r1 | r2;
    printf("%d", num);
}