/*
13.  Print alternate odd number
between  21 to  39.
  o/p:    21   25   29   33   37 */
#include <stdio.h>
void main()
{
    int i;
    for (i = 21; i < 40; i=i + 4)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}