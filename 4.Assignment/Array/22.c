/*
22.WAP in C to merge 2 array into 3rd array .
i/p: int a[3]={1,5,7}; b[3]={11,22,33};
o/p: int c[6]={1,11,5,22,7,33}

*/
#include <stdio.h>
void main()
{

  int a[3] = {1, 5, 7}, b[3] = {11, 22, 33}, i, c[6], j, k;
  for (i = 0, j = 0; i < 3; i++, j++)
  {
    c[j] = a[i];
    j++;
    c[j] = b[i];
    // if (i % 2 == 0)
    // {
    //   c[i] = a[k];
    //   k++;
    // }
    // else
    // {
    //   c[i] = b[j]; j++;
    // }
  }
  for (i = 0; i < 6; i++)
  {
    printf(" %d", c[i]);
  }
}