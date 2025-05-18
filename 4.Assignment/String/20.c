/*
20. WAP in C to insert ‘p’ at 0th index , ‘q’ at 1st
index  in same string  using  goto .
     i/p:   char s[10]=”123456”
          o/p:     pq123456
*/
#include <stdio.h>
void main()
{
    char s[100];
    int i, j, l = 0, in, d;
    printf("Enter a string:\n");
    scanf("%[^\n]", s);

l1:
    if (s[l])
    {
        l++;
        goto l1;
    }
    i = l;
l2:
    if (i >= 0)
    {
        s[i + 2] = s[i];
        i--;
        goto l2;
    }

    s[1] = 'q';
    s[0] = 'p';

    printf("%s", s);
}