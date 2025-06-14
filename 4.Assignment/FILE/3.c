/*
Q3. WAP in C  to count total number of line in file using  fgets() fun.

              -----i/p file------
           123 abc coding
           pawan  sirji
           99 vector
        o/p: no. of line =  3

*/
#include <stdio.h>
void main(int argc, char **argv)
{
    FILE *fp;
    fp = fopen(argv[1], "r");
    int c = 0;
    char s[1000];
    while (fgets(s, sizeof(s), fp) != NULL)
        c++;
    printf("no of line= %d", c);
}