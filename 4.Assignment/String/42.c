/*
42.WAP in C to reverse word having digit in string.
      i/p: char s[20]=“coding 123abc vector ptr1”;
       o/p: char s[20 =”coding cba321 vector 1rtp”
*/
#include <stdio.h>
void main()
{
    char s[200];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int i, j, k, l, start, end, t, m, n;
    for (i = 0; s[i]; i++)
    {
        if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
        {
            start = i;
            for (j = i;; j++)
            {
                if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
                {
                    break;
                }
            }
            end = j;
            int digit = 0;
            for (m = start, n = end; m <= n; m++)
            {
                if (s[m] >= '0' && s[m] <= '9')
                {
                    digit = 1;
                    break;
                }
            }
            if (digit)
            {
                for (k = start, l = end; k < l; k++, l--)
                {
                    t = s[k];
                    s[k] = s[l];
                    s[l] = t;
                }
                i = end + 1;
            }
        }
    }
    printf("after: %s", s);
}