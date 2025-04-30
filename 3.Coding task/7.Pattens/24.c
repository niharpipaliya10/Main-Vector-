/*
       A 1 B 2 C
       1 A 2 B C
       A 1 B C D
       1 A B C D
       A B C D E
*/
#include <stdio.h>
void main()
{
       int i, j, k;
       char ch=67;
       for (i = 0; i < 5; i++,ch=ch-2)
       {
              for (j = 0; j < 5 - i; j++)
              {
                     printf(" #");
              }
              for (k = 0; k <= i; k++,ch++)
              {
                     printf(" %c",ch);
              }
              printf("\n");
       }
}