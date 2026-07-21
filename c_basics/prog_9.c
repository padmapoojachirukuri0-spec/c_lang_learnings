#include<stdio.h>
int main()
{
    int age;
    char name[20];
    printf("Hello, Good morning!\n");
    printf("Enter your name:");
    scanf("%s",&name); //notice the format specifier for string (%s)
    
    
    printf("Thank you %s.\nYou are awesome.",name);
    return 0;
}
