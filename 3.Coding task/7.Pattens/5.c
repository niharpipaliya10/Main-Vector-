/*
     a
     c a
     f c a
     j f c a
     o j f c a
*/
#include <stdio.h>
void main()
{
    int i, j, num, d = 0, p, c = 2, a;
    char ch;
    for (i = 0, ch = 97; i < 5; i++, ch = ch + i*3 - 1)
    {
        for (j = 0; j <= i; j++, ch = ch--)
        {

            printf("%c", ch = ch + (i + j)*2 );
        }
        printf("\n");
    }
}