#include<stdio.h>
void hello(int n){
    if(n==0){
    return;
}
printf("Entering hello (%d)\n",n);
printf("Hello\n");
hello(n-1);
printf("Leaving hello (%d)\n",n);
}
int main(){
    hello(3);
    return 0;
}
