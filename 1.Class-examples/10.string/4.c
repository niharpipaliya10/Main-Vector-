// wap to printf the string char by char
#include <stdio.h>
void main()
{

    char s[14];
    int i;
    printf("Enter a string:\n");
    scanf("%s", s);
    // for (i = 0; i < 14; i++)
    // {
    //     printf("%c", s[i]);
    // }
    // for(i=0;s[i]!='\0';i++){
    //     printf("%c\n",s[i]);
    // }
     for(i=0;s[i];i++){
        printf("%c",s[i]);
    }
    printf("\n");
}