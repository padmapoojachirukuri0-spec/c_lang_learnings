#include<stdio.h>
int main(){
    int arr[5] = {21,24,27,78,98};
    int i;
    printf("Reverse order:\n");
    for(i = 4; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}