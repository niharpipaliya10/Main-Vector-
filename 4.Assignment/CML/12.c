/*
WAP  in C using  CLA  to write given functio.
i/p:  ./a.out  coding   c_ds
   o/p : len1=  6    , len2= 4
           both string not equal
int my_strlen(char *);
int my_strcmp(char *, char*);
*/
#include <stdio.h>
#include <string.h>
int my_strlen(char *);
int my_strcmp(char *, char *);
void main(int argc, char **argv)
{
    int len1, len2, n;
    len1 = my_strlen(argv[1]);
    printf("len1=%d\n", len1);
    len2 = my_strlen(argv[2]);
    printf("len2=%d\n", len2);
    n = my_strcmp(argv[1], argv[2]);
    if (n == 0)
    {
        printf("both are not equal\n");
    }
    else if (n < 0)
    {
        printf("second string is big\n");
    }
    else
    {
        printf("first string id big\n");
    }
}
int my_strcmp(char *p, char *q)
{
    int n;
    n = strcmp(p, q);
    return n;
}
int my_strlen(char *p)
{
    int i;
    for (i = 0; p[i]; i++)
        ;
    return i;
}