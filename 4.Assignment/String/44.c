/*
44.WAP in C  to check substring is present in a
main string or  not using nested while loop.
   i/p: char m[20]=”123 abc”, s[10]=”abc”;
      o/p:  yes
*/

#include <stdio.h>

void main()
{
    char m[20], s[10];
    printf("Enter a main string:\n");
    scanf("%[^\n]", m);
    printf("Enter a sub string:\n");
    scanf("%s", s);
    int i, j, f = 0;

    for (i = 0; m[i] != '\0'; i++)
    {
        for (j = 0; s[j] != '\0'; j++)
        {
            if (m[i + j] != s[j])
            {
                break;
            }
        }

        if (s[j] == '\0')
        {
            f = 1;
            break;
        }
    }

    if (f)
        printf("yes\n");
    else
        printf("no\n");
}

// #include <stdio.h>
// void main()
// {
//     char m[20] = "123 abc", s[10] = "abc";
//     int i, j, k, l, start1, end1, start, end,f=0;
//     for (i = 0; s[i]; i++)
//     {
//         if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
//         {
//             start1 = i;
//             for (j = i;; j++)
//             {
//                 if (s[j + 1] == ' ' || s[j + 1] == '\0')
//                 {
//                     end1 = j;
//                     break;
//                 }
//             }
//         }
//     }
//     for (i = 0; m[i]; i++)
//     {
//         if (m[i] != ' ' && (m[i - 1] == ' ' || i == 0))
//         {
//             start = i;
//             for (j = i;; j++)
//             {
//                 if (m[j + 1] == ' ' || m[j + 1] == '\0')
//                 {
//                     end = j;
//                     break;
//                 }
//             }
//             for (k = start, l = start1; k <= end && m[k] == s[l]; k++, l++)
//                 ;

//             if (l - start1 == end1 - start1 + 1)
//             {
//                 printf("yes");
//                 f = 1;
//                 break;
//             }
//             else
//             {
//                 // printf("no");
//                 continue;
//             }
//         }
//     }
//     if (f != 1)
//     {
//         printf("no");
//     }
// }