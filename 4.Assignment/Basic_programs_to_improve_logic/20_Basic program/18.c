/*18.Print binary of char .*/
#include <stdio.h>
void main()
{
    char ch, pos;
    printf("Enter a charactor:\n");
    scanf("%c", &ch);
    for (pos = 7; pos >= 0; pos--)
    {
        printf("%d", ch >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
}