/*
25. Print 1st odd digit from end.
i/p1:    96412         o/p1:  1
i/p2:      1725         o/p2:  5
*/
#include <stdio.h>
void main()
{
    int num, r, temp, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Print 1st odd digit from end: ");
    while (temp)
    {
        r = temp % 10;

        if (r % 2 != 0 &&c == 0)
        {
            printf("%d", r);
            c++;
        }
        temp = temp / 10;
    }
}