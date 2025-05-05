// Wap to convert low case string in to upper case.
#include <stdio.h>
void main()
{
    char s[50];
    int i;
    printf("Enter a string:\n");
    scanf("%s", s);
    printf("%s\n", s);

    for (i = 0; i < s[i]; i++)
    {
        
            if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    printf("%s", s);
}