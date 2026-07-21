#include<stdio.h>
int main(){
    int n;
    int i=1; //initialization
    int sum=0;
    printf("Enter Number :");
    scanf("%d",&n);
    while(i<=n) //condition
    {
        sum = sum+i; //loop body
        i++; //update
    }
    printf("sum of 1st %d natural number is: %d\n",n,sum);
    return 0;


}