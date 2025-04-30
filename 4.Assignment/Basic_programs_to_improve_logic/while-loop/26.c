/*
26.Print 1st odd digit from start.
i/p1:    64512         o/p1:  5
i/p2:     41725         o/p2:  1
*/
#include <stdio.h>
void main()
{
    int num, r, temp, rev = 0, sum = 0, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Print 1st odd digit from start:  ");
    while (temp)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    // printf("%d\n", rev);
    num = rev;
    while (num)
    {
        r = num % 10;
        if (r % 2 != 0&&c==0)
        {
            printf("%d ", r);
            c++;
            // sum = sum + r;
        }
        num = num / 10;
    }
    // printf("%d", sum);
}