/*
wap to design a recursion fun for int number print binary
*/
#include <stdio.h>
void print_binary(int);
void main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    print_binary(num);
    printf("\n");
    print_binary(num);
}
void print_binary(int num)
{
    static int pos = 31;
    if (pos >= 0)
    {
        printf("%d", num >> pos & 1);
        if (pos % 8 == 0)
        {
            printf(" ");
        }
        pos--;
        print_binary(num);
    }
    else
    {
        pos = 31;// because of pos new number.
    }
}