#include<stdio.h>
void greet(){
    printf("welcome to c programming.\n");
}
int main(){
    greet();
    printf("I am calling the greet() function again in the next line.\n,");
    greet();
    return 0;
}