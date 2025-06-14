/*
Q1.   WAP in C  to  count  line , word and digit in file.

            -----i/p file------
           123 abc coding
           file c ds  789 sirji
-------$ ./a.out data
 o/p:   no of line =   2   , word= 8 , digit= 6

*/
#include <stdio.h>
void main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("");
    }
    FILE *fp;

    int word = 0, digit = 0, line = 0;

    fp = fopen(argv[1], "r"); // file open in read mod only

    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n')
            word++;
        if (ch >= '0' && ch <= '9')
            digit++;
        if (ch == '\n')
            line++;
    }
    fseek(fp, -1, SEEK_END);
    if (fgetc(fp) != '\n')
    {
        line++;
    }
    fclose(fp);
    printf("no of words = %d\n", word);
    printf("no of digit = %d\n", digit);
    printf("no of line = %d\n", line);
}