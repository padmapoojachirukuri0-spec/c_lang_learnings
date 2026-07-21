#include<stdio.h>
int main(){
    int r,s;
    for(r=1;r<=5;r++){
        for(s=1;s<=r;s++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}