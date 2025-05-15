/*
17. WAP in C to delete prime digit from string.
        i/p:   char s[20]=”abc3456 567abc”;
           o/p:      abc46 6abc
*/
#include <stdio.h>
void main()
{
    char s[20];
    int i, j, k, n, c;
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            n = s[i] -'0';
            if (n == 2 || n == 3 || n == 5 || n == 7)
            {
                for (j = i; s[j]; j++)

                    s[j] = s[j + 1];
                i--;
            }
        }
    }
    printf("%s", s);
}