#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i;
    ptr = (int *)malloc(5 * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
        printf("Enter 5 numbers:\n");
        for(i=0;i<5;i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("\nThe entered numbers are:\n");
        for(i=0;i<5;i++)
        {
            printf("%d ",ptr[i]);
        }
        free(ptr);
        ptr = NULL;
        return 0;
}