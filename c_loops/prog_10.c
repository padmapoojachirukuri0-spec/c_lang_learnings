#include<stdio.h>
int main(){
    int marks;
    do{
        printf("Enter your marks(0-100):");
        scanf("%d",&marks);
        if(marks<0 || marks>100){
            printf("invalid marks. Enter marks again. .\n");
        }
    }while(marks<0 || marks>100);
    if (marks>=90){
        printf("grade=A\n");
    }
    else if(marks>=80){
        printf("grade = B\n");
    }
    else if(marks>=70){
        printf("grade = C\n");
    }
    else if(marks>=60){
        printf("grade = D\n");
    }
    else{
        printf("grade = Fail\n");
    }
    return 0;

}