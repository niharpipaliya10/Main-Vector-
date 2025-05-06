// Wap to search a word on string.
#include <stdio.h>
void main()
{
    char s[10], ch;
    int i;
    printf("Enter a string and char:\n");
    scanf("%s %c", s, &ch);
    printf("s=%s ch=%c\n", s, ch);
    for (i = 0; s[i]; i++)
    {
        if (s[i] == ch)
        {
            printf("\nch is present\n");
            return;
        }
    }
    printf("\nch is not in this string");
}