/*
 WAP in C to  print  all  word  length  .
           ---  i/p file----
          123 abc coding
           file  sirji  FILE
-------$ ./a.out data
 o/p :   3   3    6   4  5  4

*/

#include <stdio.h>
void main(int argc, char **argv)
{
    FILE *fp;
    int c = 0;
    fp = fopen(argv[1], "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            c++;
        }
        else
        {
            if (c > 0)
                printf("%d ", c);
            c = 0;
        }
    }
}