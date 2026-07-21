#include<stdio.h>
int main()
{
    for(int i=10;i>=1;i--)
    /*initialization, condition and update in the same line*/
    {
        printf("%d\n",i); //loop body
    }
    return 0;
}