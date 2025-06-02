/*
sorting the structure data.
*/
#include <stdio.h>
#include <string.h>
struct stu
{
    int r;
    char s[60];
    float m;
};
void main()
{
    struct stu v[5], t;
    int i, ele, j;
    ele = sizeof(v) / sizeof(v[0]);
    for (i = 0; i < ele; i++)
    {
        printf("Enter rollno:\n");
        scanf("%d", &v[i].r);
        printf("Enter a name:\n");
        scanf("%s", v[i].s);
        printf("Enter a mark:\n");
        scanf("%f", &v[i].m);
    }
    printf("Before:\n");
    for (i = 0; i < ele; i++)
    {
        printf("%d %s %f\n", v[i].r, v[i].s, v[i].m);
    }
    /////////////////////////////////////////////////////
    printf("select 1 for rollno to shaorting\n");
    printf("select 2 for name to shaorting\n");
    printf("select 3 for marrk to shaorting\n");
    int op;
    scanf("%d", &op);
    if (op == 1)
    {
        for (i = 0; i < ele - 1; i++)
        {
            for (j = 0; j < ele - 1 - i; j++)
            {
                if (v[j].r > v[j + 1].r)
                {
                    t = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = t;
                }
            }
        }
    }
    else if (op == 2)
    {
        for (i = 0; i < ele - 1; i++)
        {
            for (j = 0; j < ele - 1 - i; j++)
            {
                if (strcmp(v[j].s, v[j + 1].s) > 0)
                {
                    t = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = t;
                }
            }
        }
    }
    else
    {
        for (i = 0; i < ele - 1; i++)
        {
            for (j = 0; j < ele - 1 - i; j++)
            {
                if (v[j].m > v[j + 1].m)
                {
                    t = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = t;
                }
            }
        }
    }
    ////////////////////////////////////////////////////
    printf("After:\n");
    for (i = 0; i < ele; i++)
    {
        printf("%d %s %f\n", v[i].r, v[i].s, v[i].m);
    }
}