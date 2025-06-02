/*
in structure if one of the member of pointer how to handle it.
*/
#include<stdio.h>
#include<stdlib.h>
struct stu{
    int r;
    char *n;
    float m;
};
void main(){
    struct stu *p;
    char s[20];
    p=malloc(sizeof(struct stu));
    p->n=s;
    printf("Enter roll no ,name,mark\n");
    scanf("%d %s %f",&p->r,p->n,&p->m);
    printf("%d %s %f",p->r,p->n,p->m); 
}