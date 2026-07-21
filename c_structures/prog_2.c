#include<stdio.h>
struct Student
{
    int roll;
    char name[30];
};
int main()
{
    struct Student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter Roll number:");
        scanf("%d", &s[i].roll);
        getchar();
        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name),stdin);
    }
    printf("\nStudent Details\n");
    for(i=0;i<3;i++)
    {
        printf("%d %s",s[i].roll,s[i].name);
    }
    return 0;
}