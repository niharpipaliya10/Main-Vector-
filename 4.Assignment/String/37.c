/*
37. WAP in C to merge 2 string to another string.
i/p: s1[10]=”12” s2[10]=”ABCD”
o/p : s3[20]=”1A2BCD”
*/

#include <stdio.h>
#include <string.h>
void main()
{

    char s1[200] ,s2[200], s3[200];
    printf("Enter a string 1:\n");
    scanf("%[^\n]", s1);
    printf("Enter a string 2:\n");
    scanf(" %[^\n]", s2);
    int i, j, k, len1, len2;
    len1 = strlen(s1);
    len2 = strlen(s2);
    for (i = 0, j = 0, k = 0; j < len1 || k < len2;)
    {
        if (j < len1)
            s3[i++] = s1[j++];
        if (k < len2)
            s3[i++] = s2[k++];
    }
    s3[i] = '\0';
    printf("%s\n", s3);
}