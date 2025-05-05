#include <stdio.h>
void main()
{

    char s[10];
    printf("Enter a string:\n");
    // scanf("%s", s);

    // printf("s=%s\n", s);
    // printf("s+1=%s", s + 1);
    scanf("%[^\n]", s);
    printf("%s", s[0]);
}