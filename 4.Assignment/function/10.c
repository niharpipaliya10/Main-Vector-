/*
10.
WAP in C using function to delete all digits in
strings and count deleted digits .
  i/p:  char s[20]=”a1b2c3d4123”;
 o/p:    abcd  , digit count = 7
    int del_count_fun(char  * s   );
*/
#include <stdio.h>
int del_count_fun(char *);
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int c;
    c = del_count_fun(s);
    printf("digit count=%d", c);
}
int del_count_fun(char *s)
{
    int i, j, k, c = 0;
    for (i = 0; s[i]; i++)
    {

        if (s[i] >= '0' && s[i] <= '9')
        {
            c++;
            for (k = i; s[k]; k++)
            {
                s[k] = s[k + 1];
            }
            i--;
        }
    }
    printf("%s\n", s);
    return c;
}