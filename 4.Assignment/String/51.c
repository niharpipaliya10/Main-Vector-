/*
51.WAP in C to delete largest word from string.
  i/p:  char s[20]=”c vector ds coder”
      o/p:    char s[20]=”c ds coder”
*/
#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int start, end, i, j, k, l = 0, m, n;
    for (i = 0; s[i]; i++)
    {
        if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
        {
            start = i;

            for (j = i;; j++)
                if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
                    break;
            end = j;

            //   printf("%d %d\n",start,end);
            k = end - start + 1;
            if (l < k)
            {
                l = k;
                m = start;
                n = end;
            }
        }
    }
    for (i = m, j = n + 2; s[j]; i++, j++)
    {
        s[i] = s[j];
    }
    s[i] = '\0';
    printf("%s",s);
}