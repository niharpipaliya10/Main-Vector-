/*
38.WAP in C to find largest words in string.
     i/p:  char s[20]=”123 vector c  ds”;
          o/p:   vector
*/
#include <stdio.h>
void main()
{
   char s[20];
   printf("Enter a string:\n");
   scanf("%[^\n]", s);
   int start, end, i, j, k, l = 0, a, b;
   for (i = 0; s[i]; i++)
   {
      if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
      {
         start = i;

         for (j = i;; j++)
            if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
               break;
         end = j;
      }
      //   printf("%d %d\n",start,end);
      k = end - start + 1;
      if (l < k)
      {
         l = k;
      }
   }
   //  printf("%d\n", l);
   for (i = 0; s[i]; i++)
   {
      if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
      {
         start = i;

         for (j = i;; j++)
            if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
               break;
         end = j;
      }
      k = end - start + 1;
      if (k == l)
      {
         for (a = start; a <= end; a++)
         {
            printf("%c", s[a]);
         }
        break;
      }
   }
}