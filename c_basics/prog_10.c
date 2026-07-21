#include<stdio.h>
#include<string.h>
int main()
{
    char name_1[20]; //declaring name_1 variable with 20 character limit
    char name_2[20]; //declaring name_1 variable with 20 character limit  
    printf("Hello, Good morning!\n");
    printf("enter your name:");
    fgets(name_1, sizeof(name_1),stdin); //fgets function accepts a line of text with spaces
    printf("enter your friend's names:");
    scanf("%s",&name_2);
    printf("hey %s.\nyour friend's name is %s.",name_1,name_2);
    printf("both %s and %s are best friends",name_1,name_2); //sequence of variable is import
    return 0;

}