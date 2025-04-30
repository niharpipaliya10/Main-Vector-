//wap to delete the last digit of the given number.

#include <stdio.h>
void main()
{
    int num;
    printf("enter your number ...\n");
    scanf("%d",&num);
    printf("before last digit delete num=%d \n", num);

    num = num / 10;

    printf("after last digit delete num=%d", num);
}
