#include<stdio.h>
int main()
{
    int num = 50;
    int *ptr;
    ptr = &num;
    printf("Befre = %d\n",num);
    *ptr = 100;
    printf("After = %d\n",num);
    return 0;

}