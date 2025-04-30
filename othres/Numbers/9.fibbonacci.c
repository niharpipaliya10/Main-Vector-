#include <stdio.h>

int main()
{
     int a = 0, b = 1, i, sum;
    printf("%d %d ", a, b);
    for (i = 1; i <10; i++)
    {
        sum = a + b;
        if(sum<10)
        printf("%d ", sum);
        a = b;
        b = sum;
    }
}




// #include <stdio.h>
// void main()
// {
//     int i, j, sum = 0;
//     for (i = 0, j = 1; sum < 10;)
//     {
//         if (i == 0)
//         {
//             printf("%d ", i);
//         }
//         sum = i + j;
//         if (sum <= 10)
//             printf("%d ", sum);
//         i = sum;
//         j = sum - j;
//     }

   
// }