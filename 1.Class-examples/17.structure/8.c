/*
wap allocate dynamic memory for student database scan it and print it.
*/
#include <stdio.h>
#include <stdlib.h>
struct stu
{
    int r;
    char s[20];
    float m;
};
void main()
{
    struct stu v;
    struct stu *p;
    p = malloc(sizeof(struct stu));
    printf("Enter a rooll ,name,mark\n");

    scanf(" %d %s %f", &p->r, p->s, &p->m);
    printf(" %d %s %f\n", p->r, p->s, p->m);
}