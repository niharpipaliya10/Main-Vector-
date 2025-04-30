// Convert the characters Upper to Lower and Lower to Upper using bitwise

#include <stdio.h>
void main()
{

    char ch;
    printf("Enter a charactor:");
    scanf("%c", &ch);

    ch = ch ^ 32;
    printf("%c", ch);
}