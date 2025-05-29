/*
40. WAP in C to count each char in string .
    i/p:  char s[20]=”1213ac1c”;
   o/p:   1 --> 3 , 2--> 1,3-->1 ,a-->1 ,c-->2
*/
#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int i, j, c, d;
    for (i = 0; s[i]; i++)
    {
        d = 0;
        for (j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                d = 1;
                break;
            }
        }
        if (d)
            continue;
        for (j = i + 1, c = 1; s[j]; j++)
        {
            if (s[i] == s[j])
            {
                c++;
            }
        }
        if (c >= 1)
            printf("%c-->%d times\n", s[i], c);
    }
}