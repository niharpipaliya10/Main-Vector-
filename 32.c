/*
32.WAP in C to remove conjucutive spaces in string.
     i/p: s[20]=”abc    coding    sirji”
           o/p:   abc coding sirji
*/
#include <stdio.h>
#include <string.h>
void main()
{
      char s[20];
      printf("Enter a string :\n");
      scanf("%[^\n]", s);
      int i, j;
      for (i = 0; s[i]; i++)
      {
            if (s[i] == ' ' && s[i + 1] == ' ')
            {

                  for (j = i; s[j]; j++)
                  {
                        s[j] = s[j + 1];
                  }
            }
      }
      printf("%s", s);
}