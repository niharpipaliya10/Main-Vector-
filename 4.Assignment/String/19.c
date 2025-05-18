/*
19. WAP in C to insert ‘p’ at 0th pos in same string .
     i/p:   char s[10]=”123456”, ch=’p’;
          o/p:     p123456
*/
#include <stdio.h>
void main()
{
    char s[100], c;
    int i, j, l, in;
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    printf("Enter a index:");
    scanf(" %d", &in);
    printf("Enter a charactor:\n");
    scanf(" %c", &c);
    for (l = 0; s[l]; l++)
        ;
    for (i = l; i >= in; i--)
    {
        s[i + 1] = s[i];
    }

    s[in] = c;
    printf("%s", s);
}