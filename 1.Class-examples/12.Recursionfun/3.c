/*
wap to print a string using recursive function.asm
*/
#include <stdio.h>
void print_str(const char *);
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    print_str(s);
}
/*void print_str(const char *p)
{// string as string print
    if (*p)
    {
        printf("%c", *p);
        print_str(p + 1);
        //    { // printf("%c", *p++);
        // p++;
        // print_str(p );
        // }
    }
}*/
void print_str(const char *p)
{
    if (*p)
    {
        print_str(p + 1);
        printf("%c", *p);
    }
}