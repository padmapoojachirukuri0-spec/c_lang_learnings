#include<stdio.h>
int main()
{
    FILE *fp;
    int roll;
    char name[30];
    float marks;
    fp = fopen("student_marks_data.txt","w");
    if(fp == NULL)
    {
        printf("unable to open file.\n");
        return 1;
    }
    printf("enter roll number:");
    scanf("%d",&roll);
    getchar();
    printf("enter name:");
    fgets(name,sizeof(name),stdin);
    printf("enter marks:");
    scanf("%f",&marks);
    fprintf(fp,"%d\n",roll);
    fprintf(fp,"%s\n",name);
    fprintf(fp,"%.2f\n",marks);
    fclose(fp);
    printf("student details saved successfully.\n");
    return 0;
}