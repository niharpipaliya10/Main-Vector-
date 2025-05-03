/*
26.Print 1st odd digit from start.
 i/p1:    64512         o/p1:  5 
i/p2:     41725         o/p2:  1
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
        if(r%2!=0)
        c++;
        rev = rev / 10;
    } while (c==0);
    printf("sum of 1st  odd digit is:%d ", r);
}