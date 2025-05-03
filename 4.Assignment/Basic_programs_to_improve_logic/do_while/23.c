/*
23. Print  2nd last   digit  .   
i/p1:    96412         o/p1:  1 
i/p2:     725          o/p2:  2
*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0,c=0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
        r = num % 10;    
        num = num / 10;
        c++;
    } while (c==1);
    printf("%d", r);
}