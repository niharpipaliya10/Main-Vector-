/*

wapto allocate dma store 2 int store tha data and print the data
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter number of int:\n");
    scanf("%d",&n);
    int *p, i;
    p = malloc(n);
    printf("Enter a %d int value:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &p[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d", p[i]);
    }
    printf("\n");
}