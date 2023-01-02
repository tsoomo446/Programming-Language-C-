#include <stdio.h>
#include <string.h>

struct Student
{
    char fname[20], lname[20], id[10];
    float golch;
};

void read(struct Student *s)
{
    printf("Suragchiin id oruulna uu\n");
    scanf("%s\n", s->id);
    printf("Suragchiin ovog oruulna uu\n");
    scanf("%s\n", s->lname);
    printf("Suragchiin ner oruulna uu\n");
    scanf("%s\n", s->fname);
    printf("Suragchiin golch oruulna uu\n");
    scanf("%f\n", &s->golch);
}

void print(struct Student s)
{
    printf("ID: %s\n", s.id);
    printf("Ovog: %s\n", s.lname);
    printf("Ner: %s\n", s.fname);
    printf("Golch: %0.1f\n", s.golch);
}

void set_fname(struct Student *p, char ner[])
{
    strcpy((*p).fname, ner);
}

void set_lname(struct Student *p, char ovog[])
{
    strcpy((*p).lname, ovog);
}

void set_id(struct Student *p, char id[])
{
    strcpy((*p).id, id);
}

void set_golch(struct Student *p, float golch)
{
    (*p).golch = golch;
}

int main()
{
    struct Student bat, t;
    read(&bat);
    print(bat);
    set_fname(&t, "dorj");
    set_lname(&t, "bold");
    set_id(&t, "1324");
    set_golch(&t, 3);
    print(t);
    return 0;
}