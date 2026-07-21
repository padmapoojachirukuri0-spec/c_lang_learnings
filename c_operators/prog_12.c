#include<stdio.h>
int main()
{
    int choice;
    printf("====== Restaurant Menu ======\n");
    printf("1. Dum biryani (non-veg)\n");
    printf("2. fry biryani (non-veg)\n");
    printf("3. vegetable biryani (veg)\n");
    printf("4. paneer biryani (veg)\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("your ordered dum biryani (non-veg).\n");
        break;
        case 2:
        printf("your ordered fry biryani (non-veg) .\n");
        break;
        case 3:
        printf("your ordered vegetable biryani (veg).\n");
        break;
        case 4:
        printf("your ordered paneer biryani (veg) .\n");
        break;
        default:
        printf("invalid choice\n");
        break;
    }
    return 0;

}