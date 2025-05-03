/*
22. Sum of  1st 3 odd  digit .   
i/p1:    93321          o/p1: 15   
i/p2:    277637         o/p2: 17
*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0, sum = 0, c ;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
        r = num % 10;

        rev = rev * 10 + r;

        num = num / 10;
    } while (num);
    // printf("%d", rev);
    c=0;
    do
    {
        r = rev % 10;
        if(r%2!=0){
        sum = sum + r;
        c++;}
        rev = rev / 10;
    } while (c < 3);
    printf("sum of 1st 3 odd digit is:%d ", sum);
}