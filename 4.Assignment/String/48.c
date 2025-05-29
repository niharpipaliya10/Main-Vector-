/*
48. WAP in C to delete palindrome word from string.
      i/p:  char s[20]=”laxmi madam vector ”
      o/p:     char s[20]=”laxmi vector ”
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int start, end, i, j, len, k, l, ch, m, n;
    len = strlen(s);
    for (i = 0; s[i]; i++)
    {
        if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
        {
            start = i;
            for (j = i;; j++)
            {
                if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
                {
                    end = j;
                    break;
                }
            }
            ch = end - start;
            for (k = start, l = end; k < l; k++, l--)
            {
                if (s[k] != s[l])
                {
                    break;
                }
            }
            if (s[k] == s[l])
            {
                for (m = start, n = end + 2; s[m]; m++, n++)
                {
                    s[m] = s[n];
                }
                s[n] = '\0';
                i--;
            }
        }
    }
    printf("%s\n", s);
}