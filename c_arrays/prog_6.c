#include<stdio.h>
int main()
{
    int numbers[6];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<6;i++){
        printf("enter the value of numbers[%d]:",i);
        scanf("%d",&numbers[i]);
    
    }
    printf("\n");
    printf("=======================================\n");
    printf("printing array elements on the screen: \n");
    printf("=======================================\n");
    printf("\n");
    for (int i=0;i<6;i++){
        printf("%d\n",numbers[i]);
    }
    return 0;
}