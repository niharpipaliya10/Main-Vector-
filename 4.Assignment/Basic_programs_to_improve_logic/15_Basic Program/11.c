/*11.Toggle1stand4thbitinnum
 i/p:intn=42 o/p: 56*/
#include <stdio.h>
void main()
{
    int num;
    printf("enter  a number \n");
    scanf("%d", &num);
    num = num ^ 1 << 1;
    num = num ^ 1 << 4;
    printf("%d", num);
}