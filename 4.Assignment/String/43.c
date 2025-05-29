/*
43.WAP in C to reverse word lenght  > 4 in string.
      i/p: char s[20]=“ias abcde mkdir ”;
       o/p:char s[20= “ias edcba irdkm ”;
*/
#include <stdio.h>
void main()
{
    char s[200];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int start, end, i, j, k, m, n, t;
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
            k = end - start + 1;
            if (k > 4)
            {
                for (m = start, n = end; m < n; m++, n--)
                {
                    t = s[m];
                    s[m] = s[n];
                    s[n] = t;
                }
            }
        }
    }
    printf("after: %s\n", s);
}