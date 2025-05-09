// Designed function swaping a two number.
#include <stdio.h>
void swap_num(int *, int *);
void main()
{
    int n1, n2;
    printf("Enter a number n1 & n2 :\n");
    scanf("%d %d", &n1, &n2);
    printf("n1=%d , n2=%d\n", n1, n2);
    swap_num(&n1, &n2);
    printf("n1=%d,n2=%d", n1, n2);
}
void swap_num(int *p, int *q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}