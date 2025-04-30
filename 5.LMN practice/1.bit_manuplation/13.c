// 13. Write a programme for swapping first and last nibbles in a given integer.
//       Ex:
//       Suppose num = 10
//       It's Binary is    0000000000000000000000000001010
//       After swap       1010000000000000000000000000000

#include <stdio.h>
void main()
{

    int a, b, c;
    printf("Emter a number :");
    scanf("%x", &a);

    b = a & 0x000000ff;
    b = b << 24;
    c = a & 0xff000000;
    c = c >> 24;
    c = b | c;
    printf("%x", c);
}