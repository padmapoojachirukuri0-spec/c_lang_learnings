#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Before swap:%d %d\n",x,y);
    swap(&x,&y);
    printf("After swap: %d %d\n",x,y);
    return 0;
}
void swap(int *a,int *b){
    printf("\nInside swap()\n");
    printf("Address stored in a: %p\n",a);
    printf("Address stored in b: %p\n",b);
    printf("Value pointed by a: %d\n",*a);
    printf("Value pointed by b: %d\n",*b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
   
   

}