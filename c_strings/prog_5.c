#include<stdio.h>
#include<string.h>
int main(){
    char first[50] = "Padma";
    char second[] = "puja";
    strcat(first,second);
    printf("Now the first string is: %s\n",first);
    return 0;
}
