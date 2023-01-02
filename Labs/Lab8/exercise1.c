#include <stdio.h>
#include <string.h>

int main()
{
    char lName[20];
    char fName[20];
    char birthDate[10];
    char favColor[10];
    char hobby[20];
    char freeTime[20];
    int age;
    printf("Таны овог?\n");
    gets(lName);
    printf("Таны нэр?\n");
    gets(fName);
    printf("Таны төрсөн он сар өдөр?\n");
    gets(birthDate);
    printf("Таны дуртай өнгө\n");
    gets(favColor);
    printf("Хобби юу вэ?\n");
    gets(hobby);
    printf("Чөлөөт цагаараа юу хийдэг вэ?\n");
    gets(freeTime);

    int birthYear = (birthDate[0] - 48) * 1000 + (birthDate[1] - 48) * 100 + (birthDate[2] - 48) * 10 + (birthDate[3] - 48);
    age = 2022 - birthYear;
    printf("%s овогтой %s нь %s өдөр төрсөн.Одоо %d настай. \n Түүний дуртай өнгө бол %s. Тэр чөлөөт цагаараа %s хийдэг. Түүний \n хобби бол %s", lName, fName, birthDate, age, favColor, freeTime, hobby);
}