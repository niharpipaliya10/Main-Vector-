/*

wapto allocate dma store 1 string store tha data and print the data
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{

    char *p;
    p = malloc(sizeof(char) * 10);
    printf("Enter string value:\n");

    scanf("%s", p);

    printf("%s\n", p);
}