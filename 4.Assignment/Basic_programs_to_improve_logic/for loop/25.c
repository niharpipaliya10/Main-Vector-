/*25.Print 1st odd digit from end.
 i/p1: 96412 o/p1: 1
 i/p2: 1725 o/p2: 5*/
 #include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        if (r % 2 != 0)
        {
            c++;
            if (c == 1)
            {
                printf(" Print 1st odd digit from start : %d", r);
            }
        }
    }
}