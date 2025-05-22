/*
example 2
*/
#include <stdio.h>
void main()
{
    int a[5] = {30, 20, 50, 10, 40};
    int *p[5] = {a + 3, a + 1, a, a + 4, a + 2},i;
    for(i=0;i<5;i++){
        printf(" %d",*p[i]);
    }
}