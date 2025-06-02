/*
how to get input in struct var.
*/
#include <stdio.h>
struct one
{
    int i;
    char ch;
    float f;
};
void main()
{
    struct one v;
    printf("Enter a int:\n");
    scanf("%d", &v.i);
    printf("Enter a ch:\n");
    scanf(" %c", &v.ch);
    printf("Enter a float:\n");
    scanf("%f", &v.f);
    printf("%d %c %f\n", v.i, v.ch, v.f);
}