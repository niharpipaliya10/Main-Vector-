/*
WAP in C using  CLA  to implement  Calculator
ex1   ./a.out  44  +  200
        o/p :     244
ex2   ./a.out  44   /   0
        o/p :     FPE
*/
#include <stdio.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    if (argc < 4)
    {
        printf("USAGE: ./a.out num1,sing,num3 ");
        return;
    }
    float n, n1, n2, n3;
    n2 = atof(argv[1]);
    n = atof(argv[3]);
    switch (argv[2][0])

    {
    case '+':
        n3 = n2 + n;
        printf("sum= %f", n3);
        break;
    case '-':
        n3 = n2 - n;
        printf("sub= %f", n3);
        break;
    case '*':
        n3 = n2 * n;
        printf("mul= %f", n3);
        break;
    case '/':
        n3 = n2 / n;
        printf("div= %f", n3);
        break;
    default:
        printf(" not right option");
    }
}