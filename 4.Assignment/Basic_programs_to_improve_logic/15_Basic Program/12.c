/*12. Delete 0th bitinnum.
 i/p: intn=170 o/p:85*/
#include <stdio.h>
void main()
{
    int num;
    printf("enter  a number \n");
    scanf("%d", &num);
    num = num >> 1;

    printf("%d", num);
}