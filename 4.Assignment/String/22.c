/*
22.WAP in C to Capitalize first letter of word in string.
      i/p: char s[30]= “pawan coding sirji ”
             o/p:    Pawan Coding Sirj
*/
#include <stdio.h>
void main()
{
    char s[300];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] = s[0] - 32;
        }
        else if (s[i] == ' ')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
            {
                s[i + 1] = s[i + 1] - 32;
            }
        }
    }
    printf("%s", s);
}