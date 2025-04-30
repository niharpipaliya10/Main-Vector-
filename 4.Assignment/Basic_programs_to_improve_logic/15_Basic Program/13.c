/*13. Delete 2nd bitinnum.
 i/p: intn=39 o/p:19*/
#include <stdio.h>
void main()
{
    int num, r1, t2;
    printf("enter  a number \n");
    scanf("%d", &num);

    r1 = num >> 1;
    printf("%d", r1);
}