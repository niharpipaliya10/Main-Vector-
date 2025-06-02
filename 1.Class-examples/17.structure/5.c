/*
wap to store 5 student database using structure.
*/
#include <stdio.h>
struct stu
{
    int r;
    char s[60];
    float m;
};
void main()
{
    struct stu v[5];
    int i, ele;
    ele = sizeof(v) / sizeof(v[0]);
    for (i = 0; i < ele; i++)
    {
        printf("Enter rollno:\n");
        scanf("%d", &v[i].r);
        printf("Enter a name:\n");
        scanf("%s", v[i].s);
        printf("Enter a mark:\n");
        scanf("%f", &v[i].m);
    }
    for (i = 0; i < ele; i++)
    {
        printf("%d %s %f\n", v[i].r, v[i].s, v[i].m);
    }
}