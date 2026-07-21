#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("original value =%d\n",a);
    
    
    a++;
    printf("after first increment = %d\n",a);
    a++;
    printf("after second increment = %d\n",a);
    return 0;


}