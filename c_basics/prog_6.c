#include<stdio.h> //importing std input output library
int main()
{
    int age = 20; //store 20 in the variable age
    int marks = 95; //store 95 in the variable marks 
    char grade ='A'; //store 'A' in the variable grade
    float cgpa = 7.7; //store 7.7 in the variable cgpa
    double pi = 3.141592; //store 3.141592 in the variable pi

    printf("my age is: %d\n",age);
    printf("my marks are: %d\n",marks);
    printf("my grade is: %c\n",grade);
    printf("my cgpa is: %.1f\n",cgpa);
    printf("the value of pi is: %.4f\n",pi);
    return 0;
}