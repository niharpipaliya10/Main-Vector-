/*
allocate dynamic memory 5 int using calloc.
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p, i;
    p = calloc(5, sizeof(int));
    printf("Enter a int:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &p[i]);
    for (i = 0; i < 5; i++)
        printf("%d", p[i]);
}