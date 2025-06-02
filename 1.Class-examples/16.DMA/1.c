/*
Wap to allocate 1 int memory stor the data and print the data
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p;
    p = malloc(sizeof(int));
    printf("Enter a 1 int:\n");
    scanf("%d\n", p);
    printf("%d\n", *p);
}