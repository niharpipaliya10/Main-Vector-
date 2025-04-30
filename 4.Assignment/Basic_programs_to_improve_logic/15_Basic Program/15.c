/*15.Delete5th,6thbitinnum.
 i/p: unsignedint n=1000
 o/p: n=232*/

#include <stdio.h>
void main()
{
    unsigned int num, r1, r2;
    printf("Enter a number:");
    scanf("%d", &num);
    printf(" %d\n", num);
    r1 = num << 27;
    r1 = r1 >> 27;
    r2 = num >> 7;
    r2 = r2 << 5;
    num = r1 | r2;
    printf("%d", num);
}