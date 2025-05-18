/*
predefine fun strlen(),strcpy(),strncpy(),strcmp(),strchr(),strrchr(),strcat();

*/
#include <stdio.h>
#include <string.h>
void main()
{
    /*char s[20] = "nihar pipaliya";
    int a;
    a = strlen(s);
    printf("%d", a);*/

    /* ********************************************************************* */
    /*char s[20] = "niharpipaliya", a[10];
    printf("%s\n", a);
    // strcpy(a, s);
    // printf("%s\n", a);
    strncpy(a, s,4);
    printf("%s\n", a);*/

   /* char a[20] = "nih52r", s[20] = "nihar";
    int n;
    // n = strcmp(a, s);
    n=strncmp(a,s,4);
    printf("%d", n);*/

    /*char s[]="embedded",ch='ed';
    printf("%p\n",s);
    printf("%p\n",strchr(s,ch));
    printf("%s\n",strchr(s,ch));
    printf("%p\n",strrchr(s,ch));
     printf("%s\n",strrchr(s,ch));*/
 

  /*  char s[20]="nihar",a[]="pipaliya";
    // printf("%s",strcat(s,a));
    printf("%s",strncat(a,s,4));*/
    
    /*char s[]="nihaarpipaaliya",a[]="aa";
    printf("%p\n",s);
    printf("%p\n",strstr(s,a));
    printf("%s\n",strstr(s,a));*/

}