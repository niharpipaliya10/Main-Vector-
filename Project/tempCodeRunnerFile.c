#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
} dob, doj;
typedef struct stu
{
    char batch_id[10];
    char name[50];
    float marks;
    char assessment_status[10];
    struct date dob;
    struct date doj;
    struct stu *next;
} sll;
void add_student_data(sll **);
void print_node(sll *);
void save_file(sll *);
void search_node(sll *);
void read_file(sll **);
void main()
{
    int op;
    sll *headptr = 0;
    while (1)
    {
        printf("1)add student data\n2)load all data\n3)save data in file\n4)search name student\n5)read data from file\n");
        printf("Enter a op no:\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            add_student_data(&headptr);
            break;
        case 2:
            print_node(headptr);
            break;
        case 3:
            save_file(headptr);
            break;
        case 4:
            search_node(headptr);
            break;
        case 5:
            read_file(&headptr);
            break;

        default:
            printf("you choose invlid option\n");
            break;
        }
    }
}
/*add student data*/
void add_student_data(sll **ptr)
{
    sll *new, *last;
    new = malloc(sizeof(sll));
    printf("student bantch_id:\n");
    scanf(" %s", new->batch_id);
    printf("student name:\n");
    scanf(" %[^\n]", new->name);
    printf("student marks:\n");
    scanf("%f", &new->marks);
    printf("student assessment_status :\n");
    scanf("%s", new->assessment_status);
    printf("student birth date:\n");
    scanf("%d %d %d", &new->dob.day, &new->dob.month, &new->dob.year);
    printf("student join date:\n");
    scanf("%d %d %d", &new->doj.day, &new->doj.month, &new->doj.year);
    new->next = 0;
    if (*ptr == 0)
    {
        *ptr = new;
    }
    else
    {
        last = *ptr;
        while (last->next)
        {
            last = last->next;
        }
        last->next = new;
    }
    printf("Student added successfully!\n");
}
/* load all data */
void print_node(sll *ptr)
{

    if (ptr == 0)
    {
        printf("no recorde found\n");
        return;
    }
    printf("banch_id     name     mark     ass_sta     birthdate     joindate\n");
    while (ptr)
    {
        printf("%s  %s  %f  %s  %d-%d-%d  %d-%d-%d\n", ptr->batch_id, ptr->name, ptr->marks, ptr->assessment_status, ptr->dob.day, ptr->dob.month, ptr->dob.year, ptr->doj.day, ptr->doj.month, ptr->doj.year);
        ptr = ptr->next;
    }
    printf("\n");
}
/* save data in file*/
void save_file(sll *ptr)
{
    if (ptr == 0)
    {
        printf("no record found\n");
        return;
    }
    FILE *f;
    char s[10];
    printf("Enter a file name\n");
    scanf("%s", s);
    f = fopen(s, "w");
    while (ptr)
    {
        fprintf(f, "%s  %s  %f  %s  %d-%d-%d  %d-%d-%d\n", ptr->batch_id, ptr->name, ptr->marks, ptr->assessment_status, ptr->dob.day, ptr->dob.month, ptr->dob.year, ptr->doj.day, ptr->doj.month, ptr->doj.year);
        ptr = ptr->next;
    }

    fclose(f);
}

/*search student name*/
void search_node(sll *ptr)
{
    if (ptr == 0)
    {
        printf("no rcord found\n");
        return;
    }
    int f = 0;
    char name[50];
    printf("Enter a name\n");
    scanf(" %[^\n]", name);
    while (ptr)
    {
        if (strcmp(ptr->name, name) == 0)
        {
            printf("%s  %s  %f  %s  %d-%d-%d  %d-%d-%d\n", ptr->batch_id, ptr->name, ptr->marks, ptr->assessment_status, ptr->dob.day, ptr->dob.month, ptr->dob.year, ptr->doj.day, ptr->doj.month, ptr->doj.year);
            f = 1;
        }
        ptr = ptr->next;
    }
    if (f == 0)
        printf("no record found\n");
}

/*read data in file*/
void read_file(sll **ptr)
{
    sll *new, *last;

    FILE *fp;
    char s[10];
    printf("Enter a file name\n");
    scanf("%s", s);

    fp = fopen(s, "r");
    if (fp == 0)
    {
        printf("file is not present \n");
        return;
    }
    while (1)
    {
        new = malloc(sizeof(sll));
        if (fscanf(fp, "%s  %s  %f  %s  %d-%d-%d  %d-%d-%d\n", new->batch_id, new->name, &new->marks, new->assessment_status, &new->dob.day, &new->dob.month, &new->dob.year, &new->doj.day, &new->doj.month, &new->doj.year) != 10)
            break;

        new->next = 0;
        if (*ptr == 0)
        {
            *ptr = new;
        }
        else
        {
            last = *ptr;
            while (last->next)
                last = last->next;

            last->next = new;
        }
    }
    fclose(fp);
}