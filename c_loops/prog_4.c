#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    int i=n;
    while(i>=1)
    {
        sum =sum+i;
        i--;

    }
    printf("sum of 1st %d natural number is:%d\n",n,sum);
    return 0;
}