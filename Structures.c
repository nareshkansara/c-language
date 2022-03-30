#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} naresh, ravi, shubham;
// struct Student naresh, ravi, shubham;

void print()
{
    printf("%s", naresh.name);
}

int main()
{
    naresh.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    naresh.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    naresh.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';
    strcpy(naresh.name, "naresh Potter student of the year");
    strcpy(shubham.name, "Shubham Kumar");
    // printf("naresh got %d marks\n", naresh.marks);
    // printf("naresh's name is: %s\n", naresh.name);
    // printf("Shubham got %d marks\n", shubham.marks);
    // printf("Shubham's name is: %s\n", shubham.name);
    print();
    

    return 0;
}
