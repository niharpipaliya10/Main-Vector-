/*10.Clear3rdand2ndbitinnum
 i/p: intn=63 o/p: 51*/ \
#include<stdio.h>
void main()
{
    int num;
    printf("enter  a number \n");
    scanf("%d", &num);
    num = num & ~(1 << 3);
    num = num & ~(1 << 2);
    printf("%d", num);
}