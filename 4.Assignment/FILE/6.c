/*
WAP in C to merge word by word in 3rd file , using fscanf() fun.
---------$ ./a.out  data1  data2  data3
*/
#include <stdio.h>

void main(int argc, char **argv)
{
    FILE *f1, *f2, *f3;
    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "r");
    f3 = fopen(argv[3], "w");
    int c1 = 0, c2 = 0;
    char ch1, ch2;
    while ((ch1 = fgetc(f1)) != EOF)
    {
        c1++;
    }
    while ((ch2 = fgetc(f2)) != EOF)
    {
        c2++;
    }
    // printf("%d %d", c1, c2);
    rewind(f1);
    rewind(f2);
    char s1[c1 + 1], s2[c2 + 1];
    int r, r1;
    while (1)
    {
        r = fscanf(f1, "%s", s1);
        r1 = fscanf(f2, "%s", s2);

        if (r == EOF || r1 == EOF)
            break;
        if (r != EOF)
            fprintf(f3, "%s ", s1);
        if (r1 != EOF)
            fprintf(f3, "%s ", s2);
    }
}