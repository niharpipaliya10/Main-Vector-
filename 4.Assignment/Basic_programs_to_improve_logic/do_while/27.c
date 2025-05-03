/*
27. Sum of  1st and last  digit . 
i/p1:    93321          o/p1: 10   
i/p2:    277637         o/p2: 9
*/
#include <stdio.h>
void main()
{
    int num, r,r1,r2, sum = 0, c,temp ,rev=0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    temp=num;
    do
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    } while (num);
    // printf("%d", rev);
    r1=rev%10;
    r2=temp%10;
    sum=r1+r2;
    printf("sum of 1st and last digit is:%d",sum);
}