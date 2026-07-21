#include<stdio.h>
#include <string.h> 
int main()
{
    char username[20];
    char password[20];
    printf("enter username:");
    scanf("%s", username);

    if (strcmp(username, "student")==0)
    { 
        printf("enter password:");
        scanf("%s",password);
        

    if(strcmp(password, "12345")==0)
    {
        printf("login successful\n");
    }
    else{
        printf("incorrect password\n");
    }
    }
    else{
        printf("invalid username\n");
    }
    return 0;
}