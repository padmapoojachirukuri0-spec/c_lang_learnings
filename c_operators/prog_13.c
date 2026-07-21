#include<stdio.h>
int main()
{
    int show;
    printf("====== movie show ======\n");
    printf("1. morning show\n");
    printf("2. Afternoon show\n");
    printf("3. Evening show\n");
    printf("4. night show\n");
    printf("\nchoose show:");
    scanf("%d",&show);
    switch (show)
    {
        case 1:
        printf("Morning show booked.\n");
        break;
        case 2:
        printf("Afternoon show booked.\n");
        break;
        case 3:
        printf("Evening show booked.\n");
        break;
        case 4:
        printf("Night show booked.\n");
        break;
        default:
        printf("invalid show\n");
        break;
    }
    return 0;

}