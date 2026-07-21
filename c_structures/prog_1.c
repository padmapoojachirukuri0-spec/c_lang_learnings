#include<stdio.h>
struct  student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct student s1 = {1, "pooja", 90};
    struct student s2 = {2, "rynu",  99};
    
    
    printf("\n-----Student1 details-----\n");
    printf("\tRoll number : %d\n", s1.roll);
    printf("\tName        : %s\n", s1.name);
    printf("\tMarks       :%.2f\n", s1.marks);

    printf("\n-----Student-2 details-----\n");
    printf("\tRoll number : %d\n", s2.roll);
    printf("\tName        : %s\n", s2.name);
    printf("\tMarks       :%.2f\n", s2.marks);
    return 0;
}
