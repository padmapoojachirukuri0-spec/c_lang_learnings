#include<stdio.h>
int main(){
int attendance;
printf("Enter your attendance percentage:");
scanf("%d",&attendance);
if(attendance>=90)
{
    printf("Excellent attendance\n");
}
else if(attendance>=75){
printf("good attendance");
}
else if(attendance>=65){
printf("Average attendance");
}
else{
printf("you may be detained.meet the HOD immediately");
}
return 0;
}