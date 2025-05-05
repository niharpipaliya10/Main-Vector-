// how to store string in array.
#include <stdio.h>
void main()
{

    // char ch[]={'a','b','c','d'};
    // char s[]="abcd";
    char ch[5] = {'a', 'b', 'c', 'd'};
    char s[5] = "abcd";
    printf("%ld %ld\n", sizeof(ch), sizeof(s));
}