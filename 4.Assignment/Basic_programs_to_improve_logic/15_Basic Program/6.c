/* 6.Print ascii,hex,oct of char
 i/p:charch=’c’;
 o/p: 9963143*/

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a charactor:\n");
    scanf("%c", &ch);
    printf("%d %x %o", ch, ch, ch);
}