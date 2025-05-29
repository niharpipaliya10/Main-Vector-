/*
50.WAP in C to replace one word with another word
in string [word lenght -> same or diffrent] 
       i/p:  char s[30]=”pf123  pf78 pf”,                        
s1[10]=”pf”,s2[10]=’printf’ ;     
      o/p:   char s[20]=”printf123  printf78  printf”;

*/
#include <stdio.h>

void main()
{
    char m[100], s[20], s1[20], result[200];
    int i, j, k, p = 0;

    printf("Enter a main string:\n");
    scanf(" %[^\n]", m);  
    printf("Enter a sub string to replace:\n");
    scanf("%s", s);
    printf("Enter replacement string:\n");
    scanf("%s", s1);

    for (i = 0; m[i] != '\0'; )
    {
        for (j = 0; m[i + j] == s[j] && s[j] != '\0'; j++)
            ;

        if (s[j] == '\0')  
        {
            for (k = 0; s1[k]; k++, p++)
            {
                result[p] = s1[k];  
            }
            i += j;  
        }
        else
        {
            result[p++] = m[i++]; 
        }
    }

    result[p] = '\0'; 
    printf("Modified string: %s\n", result);
}
