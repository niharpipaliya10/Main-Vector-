/*
first exple of 2d array size.
*/
#include <stdio.h>
void main()
{
    int b[2][3] = {{10, 20, 30}, {40, 50, 60}};
    printf("%ld\n", sizeof(b));
    printf("%ld\n", sizeof(b[0]));
    printf("%ld\n", sizeof(b[0][0]));
}