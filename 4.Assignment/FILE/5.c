/*
WAP in C merge char by char in 3rd file , using fgetc() fun.
----- data1---               .....data2.......                   -----data3-----
abcd pqr                      123 789                            a1b2c3d  p7q8r9
  ---------$ ./a.out  data1  data2  data3

*/
#include <stdio.h>

void main(int argc, char **argv)
{
    FILE *f1, *f2, *f3;
    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "r");
    f3 = fopen(argv[3], "w");
    char ch1, ch2;
    int f = 0;
    /*while (((ch1 = fgetc(f1)) != EOF) || ((ch2 = fgetc(f2)) != EOF))
    {
        if (ch1 != EOF)
        {
            fseek(f1, -1, SEEK_CUR);
            ch1 = fgetc(f1);
            fputc(ch1, f3);
        }
        if (ch2 != EOF)
        {
            if (f == 0)
            {
                fseek(f2, -1, SEEK_CUR);
                f++;
            }
            ch2 = fgetc(f2);

            fputc(ch2, f3);
        }
    }*/
    while (1)
    {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);
        if (ch1 == EOF || ch2 == EOF)
            break;
        if (ch1 != EOF)
            fputc(ch1, f3);
        if (ch2 != EOF)
            fputc(ch2, f3);
    }
}