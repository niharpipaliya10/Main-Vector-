#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct exam
{
    int num;
    char name[20];
    float m;
};
int prime(int);
int count(struct exam **p, int);
void rev(struct exam **p, int);
void main()
{

    struct exam **p;
    int n, i, a;
    printf("Enter total stud\n");
    scanf("%d", &n);
    p = malloc(sizeof(struct exam *) * n);
    for (i = 0; i < n; i++)
    {
        p[i] = malloc(sizeof(struct exam));
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %f", &p[i]->num, p[i]->name, &p[i]->m);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d %s %f\n", p[i]->num, p[i]->name, p[i]->m);
    }
    a = count(p, n);
    printf("prime no: %d\n", a);
    rev(p, n);
    printf("Update:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d %s %f\n", p[i]->num, p[i]->name, p[i]->m);
    }
}
void rev(struct exam **p, int n)
{
    int i, k, t;
    // struct exam t;
    for (i = 0; i < n; i++)
    {
        if (p[i]->m >= 33 && p[i]->m <= 66)
        {
            int len = strlen(p[i]->name);
            for (len -= 1, k = 0; k < len; len--, k++)
            {
                t = p[i]->name[k];
                p[i]->name[k] = p[i]->name[len];
                p[i]->name[len] = p[i]->name[k];
            }
        }
    }
}
int count(struct exam **p, int n)
{
    int c = 0, i, a;
    for (i = 0; i < n; i++)
    {
        a = p[i]->num;
        if (prime(a))
            c++;
    }
    return c;
}
int prime(int n)
{
    static int i = 2, c = 0;

    if (i < n && c == 0)
    {
        if (n % i == 0)
            c++;
        i++;
        prime(n);
    }
    else
    {

        if (n == i)
        {
            i = 2;
            c = 0;
            return 1;
        }
        else
        {
            i = 2;
            c = 0;
            return 0;
        }
    }
}
