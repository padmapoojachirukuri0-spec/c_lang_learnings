#include<stdio.h>
int main()
{
    int arr[6] = {01,04,11,21,31,32};
    int i,largest;
    largest = arr[0];
    for(i=1;i<6;i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }

    }
    printf("Largest = %d\n",largest);
    return 0;
}