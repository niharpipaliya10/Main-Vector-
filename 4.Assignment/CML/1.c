/*int main(int argc , char **argv)
1.
WAP in C using CLA to write given function.
int my_atoi(const char *nptr);*/
#include <stdio.h>
int my_atoi(const char *nptr);
void main(int argc, char **argv)
{
    int num;
    num = my_atoi(argv[1]);
    printf("%d", num);
}
int my_atoi(const char *nptr)
{
    int i, num = 0;
    if (nptr[0] == '+' || nptr[0] == '-')
    {
        i = 1;
    }
    else
    {
        i = 0;
    }

    for (; nptr[i]; i++)
    {
        if (nptr[i] >= '0' && nptr[i] <= '9')
        {
            num = num * 10 + nptr[i] - 48;
        }
        else
            break;
    }
    if (nptr[0] == '-')
        ;
    {
        num = -num;
    }
    return num;
}