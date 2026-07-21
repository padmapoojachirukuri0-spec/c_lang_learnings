#include<stdio.h>
int main()
{
    int age; //declaring age variable
    char name; //declaring name variable
    printf("Hello, Good morning!\n");
    printf("Enter your name:");
    scanf("%c",&name); //take input from user and assign to name variable
    
    
    printf("Thank you %c.\nYou are awesome.",name);
    return 0;
}
