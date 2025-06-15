/*
WAP to perform following task using structure.
1) allocate dynamic memory for n student’s data
2) store data using run time input
3) print the data based on requirement :
a) design function to print rollno , name and marks of student whose rollno is even number.
b) design function to print rollno and marks of student whose name’s first and last letter is vowel.
c) design function to print mark of student whose names length pow of 2 number.
d) design function to print name of student who got highest marks.
e) design function to print rollno and name of student whose marks abr between 45 to 85.
f) design function to print rollno , name and marks of student who failed (marks < 35) in exam.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu
{
    int rollno;
    char name[200];
    float mark;
};
void scan_data(struct stu **, int);
void print_data(struct stu **, int);
void even_eollno(struct stu **, int);
void print_op(void);
void vowel(struct stu **, int);
void pov_2(struct stu **, int);
void highest_marks(struct stu **, int);
void between_45_85(struct stu **, int);
void fail(struct stu **, int);

void main()
{
    int n, i, op;
    printf("Enter how many student data add?\n");
    scanf("%d", &n);
    struct stu **p;
    p = malloc(sizeof(struct stu *) * n);
    for (i = 0; i < n; i++)
    {
        p[i] = malloc(sizeof(struct stu));
    }
    printf("Enter a student data\n");
    scan_data(p, n);
    printf("strudent all data\n");

    
    FILE *f=fopen("data", "w");
    for (i = 0; i < n; i++)
        fprintf(f, "%d %s %f", p[i]->rollno, p[i]->name, p[i]->mark);
    fclose(f);
    print_data(p, n);
    print_op();
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        even_eollno(p, n);
        break;
    case 2:
        vowel(p, n);
        break;
    case 3:
        pov_2(p, n);
        break;
    case 4:
        highest_marks(p, n);
        break;
    case 5:
        between_45_85(p, n);
        break;
    case 6:
        fail(p, n);
        break;
    default:
        printf("you selsect wrong option");
        break;
    }
    for (i = 0; i < n; i++)
    {
        free(p[i]);
        p[i] = 0;
    }
    free(p);
    p = 0;
}

// scanf data from user
void scan_data(struct stu **p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter roll no, name,marks\n");
        scanf("%d %s %f", &p[i]->rollno, p[i]->name, &p[i]->mark);
    }
}
// printf data from user
void print_data(struct stu **p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {

        printf("%d %s %f \n", p[i]->rollno, p[i]->name, p[i]->mark);
    }
}

// printf option for user which
void print_op(void)
{
    printf("print the data based on requirement :\n");
    printf("1.print rollno , name and marks of student whose rollno is even number.\n");
    printf("2.print rollno and marks of student whose name'’'s first and last letter is vowel.\n");
    printf("3.print mark of student whose names length pow of 2 number.\n");
    printf("4.print name of student who got highest marks.\n");
    printf("5.print rollno and name of student whose marks abr between 45 to 85.\n");
    printf("6.print rollno , name and marks of student who failed (marks < 35) in exam.\n");
}
// even rollno
void even_eollno(struct stu **p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if ((*p[i]).rollno % 2 == 0)
        {

            printf("%d %s %f \n", p[i]->rollno, p[i]->name, p[i]->mark);
        }
    }
}

// first & last letter vovel
void vowel(struct stu **p, int n)
{
    int i, len;
    for (i = 0; i < n; i++)
    {
        len = strlen((*p[i]).name);
        if ((*p[i]).name[0] == 'a' || (*p[i]).name[0] == 'e' || (*p[i]).name[0] == 'i' || (*p[i]).name[0] == 'o' || (*p[i]).name[0] == 'u' && (*p[i]).name[len] == 'a' || (*p[i]).name[len] == 'e' || (*p[i]).name[len] == 'i' || (*p[i]).name[len] == 'o' || (*p[i]).name[len] == 'u')
            printf("%d %s %f\n", p[i]->rollno, p[i]->name, p[i]->mark);
    }
}

// power of 2 number
void pov_2(struct stu **p, int n)
{
    int i, len;
    for (i = 0; i < n; i++)
    {
        len = strlen((*p[i]).name);
        if ((len & len - 1) == 0)
            printf("%d %s %f\n", p[i]->rollno, p[i]->name, p[i]->mark);
    }
}
// height mark
void highest_marks(struct stu **p, int n)
{
    int i, j;
    struct stu t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if ((*p[j]).mark < (*p[j + 1]).mark)
            {
                t = *p[j];
                *p[j] = *p[j + 1];
                *p[j + 1] = t;
            }
        }
    }
    printf("%d %s %f\n", p[0]->rollno, p[0]->name, p[0]->mark);
}
// mark between 45 to 85
void between_45_85(struct stu **p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if ((*p[i]).mark >= 45 && (*p[i]).mark <= 88)
        {
            printf("%d %s %f\n", p[i]->rollno, p[i]->name, p[i]->mark);
        }
    }
}
// mark<35
void fail(struct stu **p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if ((*p[i]).mark < 35)
        {
            printf("%d %s %f\n", p[i]->rollno, p[i]->name, p[i]->mark);
        }
    }
}
