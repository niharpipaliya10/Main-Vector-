/*designed function which will search one specific charactor in given string. if char is present
then it will return address of charactor from string if charactor not present than return zero.*/
#include <stdio.h>
const char str_ch(const char *, char);
void main()
{
    char s[20], ch;
    const char *p;
    printf("Enter a string:\n");
    scanf("%s", s);
    printf("Enter a charactore:\n");
    scanf(" %c", &ch);
    p = str_ch(s, ch);
    if (p==0)
        printf("ch is pesent");
    else
        printf("ch is not present");
}

const char str_ch(const char *p, char ch)
{
    int i;
    // for (i = 0; p[i]; i++)
    // {
    //     if (p[i] == ch)
    //         return *(p + i);
    // }
    while (*p)
    {
        if (*p == ch)
            return p;
        p++;

        return p;
    }
    return 0;
}
