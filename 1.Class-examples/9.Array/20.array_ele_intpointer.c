// wap to print array elememnt using int pointer.
#include <stdio.h>
void main()
{
    int a[5] = {10, 20, 30, 40, 50}, ele, i;
    //  int *p;//get 10 20 30 40 50
    char *p; // get output 10 0 0 0 20
    p = a;
    for (i = 0; i < 5; i++)
    {
        printf(" %d", p[i]); // pointer as array leke *(a+i).
        //  printf("%d\n",*p++);
    }
    printf("\n");
    printf("p=%p\n", p);
}