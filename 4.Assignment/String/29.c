/*
29.WAP in C to count vowels in string using do-while .
            i/p: s[20]=”abc pqr aeio”
            o/p: vowels count= 5
*/
#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter a string :\n");
    scanf("%[^\n]", s);
    int i = 0, c = 0;

    do
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            c++;
        }
        i++;
    } while (s[i]);
    printf("count =%d", c);
}