#include <stdio.h>
#include <string.h>
struct Student
{
    char fname[20], lname[20], id[10];
    float golch;
};

typedef struct Student Student;

void read_students(Student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d-r suragchiin ner oruulna uu\n", i + 1);
        scanf("%s", a[i].lname);
        printf("%d-r suragchiin ovog oruulna uu\n", i + 1);
        scanf("%s", a[i].fname);
        printf("%d-r suragchiin id oruulna uu\n", i + 1);
        scanf("%s", a[i].id);
        printf("%d-r suragchiin ovog golch oruulna uu\n", i + 1);
        scanf("%f", &a[i].golch);
    }
}

void print_students(Student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Ovog: %s \n", a[i].lname);
        printf("Ner: %s \n", a[i].fname);
        printf("ID: %s \n", a[i].id);
        printf("Golch: %.1f \n", a[i].golch);
    }
}

int search_by_fname(Student a[], int n, char fname[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!strcmp(a[i].fname, fname))
        {
            count++;
        }
    }
    return count;
}

int search_by_lname(Student a[], int n, char lname[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!strcmp(a[i].lname, lname))
        {
            count++;
        }
    }
    return count;
}

int search_by_id(Student a[], int n, char id[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!strcmp(a[i].id, id))
        {
            count++;
        }
    }
    return count;
}

int search_by_golch(Student a[], int n, float golch)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].golch == golch)
        {
            count++;
        }
    };
    return count;
}

void sort_by_golch(Student a[], int n)
{
    int c, d;
    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (a[d].golch < a[d + 1].golch)
            {
                struct Student temp = a[d];
                a[d] = a[d + 1];
                a[d + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Suragchdiin toog oruulna uu?\n");
    scanf("%d", &n);
    struct Student students[n];
    read_students(students, n);
    print_students(students, n);
    char fname[20];
    printf("Haih ner oruulna uu?\n");
    scanf("%s", fname);
    int s1 = search_by_fname(students, n, fname);
    printf("%d\n", s1);
    char lname[20];
    printf("Haih ovog oruulna uu?\n");
    scanf("%s", lname);
    int s2 = search_by_lname(students, n, lname);
    printf("%d\n", s2);
    char id[20];
    printf("Haih id oruulna uu?\n");
    scanf("%s", id);
    int s3 = search_by_id(students, n, id);
    printf("%d\n", s3);
    float golch;
    printf("Haih golch oruulna uu?\n");
    scanf("%f", &golch);
    int s4 = search_by_golch(students, n, golch);
    printf("%d\n", s4);
    sort_by_golch(students, n);
    print_students(students, n);
    return 0;
}