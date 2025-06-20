#include <stdio.h>
void rev(char *s);
void main()
{
    char s[100];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    rev(s);
}
void rev(char *s)
{
    int start, end, i, j, t;
    for (i = 0; s[i]; i++)
    {
        if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
        {
            start = i;

            for (j = i;; j++)
                if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
                    break;
            end = j;
        }

        // printf("%d %d\n", start, end);
        if (s[j] != ' ' && ( s[j + 1] == '\0'))
        {
            while (start < end)
            {
                if (s[start] == ' ')
                break;
                char t = s[start];
                s[start] = s[end];
                s[end] = t;
                start++;
                end--;
            }
        }
    }
    printf("%s\n", s);
}
/*
for (i = start, j = end; i < j; i++, j--)
        {
            t = s[i];
            s[i] = s[j];
            s[j] = s[i];
        }
*/