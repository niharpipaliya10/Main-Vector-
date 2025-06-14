/*
 WAP in C to replace one word with another word in file .
 -------$  ./a.out  data  hello  coding
*/
#include <stdio.h>
#include <string.h>
void main(int argc, char **argv)
{
    FILE *f;
    f = fopen(argv[1], "r+");
    char *s, ch, m[100], t[100];
    fgets(m, 100, f);
    int len;
    len = strlen(m);
    len=len+1;
    char *p, *q;
    p = m;
    q = strstr(p, argv[2]);
    strcpy(t, q + strlen(argv[2]));
    strcpy(q, argv[3]);
    strcpy(q + strlen(argv[3]), t);
    fseek(f, -len+1, SEEK_CUR);
    fputs(m, f);
}