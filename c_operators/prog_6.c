#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("orginal value = %d\n" ,a);
    a+=10;
    printf("after +=10 : %d\n",a);
    a-=5;
    printf("after -=5 : %d\n",a);
    a*=2;
    printf("after *=2 : %d\n",a);
     a/=5; 
    printf("after /=5 : %d\n",a);
    a%=3;
    printf("after %=3 : %d\n",a);
    return 0;
      
}