#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    // printf("%d",num);
    printf("Select the options \n1.prime number\n2.palidrom number\n3.perfect number\n4.armstrong number\n5.strong number\n");
}





// #include <stdio.h>
// void main()
// {

//     int c = 0, op, pos, num;
//     printf("enter a number:\n");
//     scanf("%d", &num);

//     for (c; c < 3;)
//     {
//         printf("menu \n 1.set bit\n 2.clear bit\n 3.compliment bit\n");
//         scanf("%d", &op);
//         printf("Enter a pos\n");
//         scanf("%d", &pos);
//         if (op == 1)
//         {
//             num = num | 1 << pos;
//         }
//         else if (op == 2)
//         {
//             num = num & ~(1 << pos);
//         }
//         else if (op == 3)
//         {
//             num = num ^ 1 << pos;
//         }
//         else
//         {
//             printf("envalid option\n");
//             c++;
//         }
//         printf("%d\n", num);
//     }
// }