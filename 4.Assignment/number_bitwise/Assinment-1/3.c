/*
3. WAP  to reverse the bits of given character.
Ex.  i/p  char is  ‘O’ // ascii is  79
It’s binary       :  0100 1111
After reverse  :  1111 0010
*/
#include <stdio.h>
void main()
{
    char ch;
    int pos;
    printf("Enter a character :\n");
    scanf("%c", &ch);
    printf("before reverse :\n");
    for (pos = 7; pos >= 0; pos--)
    {
        printf("%d", ch >> pos & 1);
    }
    printf("\nAfter reverse :\n");
    for (pos = 0; pos <= 7; pos++)
    {
        printf("%d", ch >> pos & 1);
    }
}