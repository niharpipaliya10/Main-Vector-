/*
Example-1
*/
#include <stdio.h>
void main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ip, (*p)[5];
    ip = a;
    p = &a;
    printf("ip=%u *ip=%u \n", ip, *ip);
    printf("p=%u *p=%u  **p=%u\n", p, *p,**p);
    printf("p=%u *p=%u  **p=%u\n", p+1, *p+1,**p+1);
}