// swap two number using pointer.
#include <stdio.h>
void main()
{

    int *p, *q, *t, n1, n2, r;
    p = &n1;
    q = &n2;
    t = &r;
    printf("Enter a number n1 and n2:\n");
    scanf("%d %d", p, q);
    printf("Before swap n1=%d ,n2=%d\n", *p, *q);
    
    r=*p;
    *p=*q;
    *q=r;
    
    printf("After swap n1=%d ,n2=%d",n1,n2);
    
}