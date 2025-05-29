/*
26. WAP in C to print  word ending with letter ‘g’.
          i/p:  char s[20]=”c ds coding doing”;
          o/p:     coding  doing
*/
#include <stdio.h>
void main()
{
    char s[200], ch;
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    printf("print  word ending with letter which\n");
    scanf(" %c", &ch);
    int i, j, start, end, k;
    char *p;
    p = s;
    // printf("%u\n",p);
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

        if (s[end] == ch)
        {
            for (k = start; k <= end; k++)
            {
                printf("%c", s[k]);
            }
            printf(" ");
        }
        i = end + 1;
    }
}