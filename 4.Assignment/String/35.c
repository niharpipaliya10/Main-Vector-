/*
35.WAP in C to reverse all words in string.
      i/p: char s[20]=“coding sirji vector”
       o/p:char s[20]= “gnidoc ijris rotcev”
*/
#include <stdio.h>
void main()
{
      char s[20], ch;
      printf("Enter a string:\n");
      scanf("%[^\n]", s);
      int start, end, i, j, k, l;
      for (i = 0; s[i]; i++)
      {
            if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
            {
                  start = i;
                  for (j = i;; j++)
                  {

                        if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
                        {
                              break;
                        }
                  }
                  end = j;

                  for (k = start, l = end; k < l; k++, l--)
                  {
                        ch = s[k];
                        s[k] = s[l];
                        s[l] = ch;
                  }
            }
      }
      printf("%s\n", s);
}