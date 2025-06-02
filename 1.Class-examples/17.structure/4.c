/*
Wap to store 1 student database using structure it should  contain 3 information
about student rollno,name,mark.
*/
#include <stdio.h>
struct stu
{
    int r;
    char s[6];
    float m;
};
void main()
{
    struct stu v;
    printf("Enter rollno:\n");
    scanf("%d", &v.r);
    printf("Enter a name:\n");
    scanf("%s", v.s);
    printf("Enter a mark:\n");
    scanf("%f", &v.m);
    printf("%d %s %f\n", v.r, v.s, v.m);
}