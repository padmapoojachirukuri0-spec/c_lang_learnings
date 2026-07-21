#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if (marks<0 || marks>100)
    {
        printf("Invalid marks. Enter correct marks.\n");
    }
    else if(marks>90){
        printf("grade=A\n");

    }
     else if(marks>80){
        printf("grade=B\n");
     }

     else if(marks>70){
        printf("grade=C");
      }
       else if(marks>60){
        printf("grade=D\n");
       }

       else {
        printf("Grade = F\n");
       }
       return 0;
    }



    

