/*
WAP in C using function to delete the
duplicate  char  from given string  .
  i/p:  char s[20]=”abcaaabbccaa”;
 o/p:    abc
    void del_fun(char  * s   );
*/
#include <stdio.h>
void del_fun(char *);
void main()
{
    char s[200];
    printf("enter the string:\n");
    scanf("%[^\n]",s);
    del_fun(s);
}
void del_fun(char *s)
{
    int i, j, k;
    for (i = 0; s[i]; i++)
    {

        for (j = i + 1; s[j];)
        {
            if (s[i] == s[j])
            {
                for (k = j; s[k]; k++)
                {
                    s[k] = s[k + 1];
                }
            }
            else
            {
                j++;
            }
        }
    }
    printf("%s", s);
}