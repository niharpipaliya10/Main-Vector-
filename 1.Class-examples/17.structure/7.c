/*
structure pointer
*/
#include <stdio.h>
#include <string.h>
struct stu
{
    int r;
    char s[20];
    float m;
};
void main()
{
    struct stu v = {5, "abcd", 23.5};
    struct stu *p;
    p = &v;
    printf("D: %d %s %f\n", v.r, v.s, v.m);
    printf("I: %d %s %f\n", p->r, p->s, p->m);
    p->r=6;
    p->m=50;
    // p->s='nihar';//invlaid
    strcpy(p->s,"nihar");
    printf("D: %d %s %f\n", v.r, v.s, v.m);
    printf("I: %d %s %f\n", p->r, p->s, p->m);
}