#include<stdio.h>
int main()
{
    float arr[5] = {10.5,20.5,31.5,40.5};
    int i;
    float sum=0;
    for (i = 0;i<5;i++)
    {
        sum +=arr[i];
    }
    printf("sum of the elements of the array  = %.3f\n",sum);
    return 0;

}