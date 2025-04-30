/* 9.Set3rdand4thbitinnum
 i/p: intn=51 o/p: 63*/
#include <stdio.h>
void main()
{
    int num;
    printf("enter  a number \n");
    scanf("%d", &num);
    num = num | 1 << 3;
    num = num | 1 << 4;
    printf("%d", num);
}