#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    { 
        sum=sum+i;
    }
    printf("sum of 1st %d natural numbers is: %d",n,sum);
    return 0;
}