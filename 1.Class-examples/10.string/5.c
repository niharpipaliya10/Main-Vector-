// memory related if size small and string big so that afected next address aray
#include <stdio.h>
void main()
{
    char ch[8], ch1[8];
    printf("%p %p\n", ch, ch1);
    printf("Enter a string ch:\n");
    scanf("%s", ch);
    printf("ch=%s\n", ch);
    printf("Enter a ch1:\n");
    scanf("%s", ch1);
    printf("ch=%s ch1=%s", ch, ch1);
    //if add string beyound size so that save other char array 
}