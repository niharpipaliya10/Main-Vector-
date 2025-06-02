/*
how to initialize structure.
*/
#include <stdio.h>
// struct one
// {
//     int i;
//     char ch;
//     float f;
// };
void main()
{   // also define in main function struc
    // struct one
    // {
    //     int i;
    //     char ch;
    //     float f;
    // };

    struct one v;
    v.i = 10;
    v.ch = 65;
    v.f = 23.5;
    printf("%d %c %f\n", v.i, v.ch, v.f);
}