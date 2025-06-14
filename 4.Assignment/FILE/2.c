/*
WAP  in C  to convet small to capital later , using  fseek  function .
--------$ ./a.out  data
*/
#include <stdio.h>
void main(int argc, char **argv)
{
    FILE *fp;
    fp = fopen(argv[1], "r+");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            fseek(fp, -1, SEEK_CUR);
            ch = ch - 32;
            fputc(ch, fp);
            fseek(fp, 0, SEEK_CUR);
        }
    }
    fclose(fp);
}