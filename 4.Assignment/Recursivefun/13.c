/*
13.WAP in C using Recursive function to count
char in  given any  string .
   i/p:   char s[20]=”123  aacc  tata ”;  , ch= ‘a’
              o/p:    count  =  4
int rec_fun_count_string( char *p,  char ch )
*/
#include <stdio.h>
int rec_fun_count_string(char *, char);
void main()
{
    char s[20] = "123  aacc  tata", ch = 'a';
    int count;
    count = rec_fun_count_string(s, ch);
    printf("count= %d", count);
}
int rec_fun_count_string(char *p, char ch)
{
    static int c;
    if (*p)
    {
        if (*p == ch)
        {
            c++;
        }
        rec_fun_count_string(p + 1, ch);
    }
    return c;
}