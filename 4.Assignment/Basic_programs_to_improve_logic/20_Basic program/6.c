/* 6.. Print even factor of 512.*/
#include <stdio.h>
void main()
{
    int num, i;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
           if(i%2==0){
            printf("%d ", i);
           }
            
        }
    }

}