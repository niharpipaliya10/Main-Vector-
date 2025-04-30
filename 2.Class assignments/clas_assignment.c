// Write a programme scanf a number bit position from user and after that display menu for set bit, clear bit,
//  or compliment bit ask option select from user and that base perform task and display result

#include <stdio.h>
void main()
{
    int num, pos, op, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    printf("Enter number of bit pos:\n");
    scanf("%d", &pos);

    if (pos >= 0 && pos <= 31)
    {
        printf("Enter a option\n 1) set bit\n 2)clear bit\n 3)compliment bit\n");
        scanf("%d", &op);
        if (op == 1)
            num = num | 1 << pos;
        else if (op == 2)
            num = num & ~(1 << pos);
        else if (op == 3)
            num = num ^ 1 << pos;
        else
            printf("Envalid select option:\n");
    }
    else
    {
        c++;
        printf(" you give bit position is not valid\n");
        if (c < 3)
        {
            goto l1;
        }
    }
    printf("num = %d\n", num);
}
