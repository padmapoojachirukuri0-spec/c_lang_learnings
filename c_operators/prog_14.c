#include<stdio.h>
int main()
{
    int pin;
    float balance = 50000;
    float amount;
    printf("Enter PIN:");
    scanf("%d",&pin);
    if (pin==1234)
    {
        printf("Enter withdrawl amount:");
        scanf("%f",&amount);
        if(amount<=balance)
        {
            printf("transaction successful\n");
            printf("please collect your cash\n");
            printf("remaining balance = %.2f\n",balance-amount);
        }
     
        else{
            printf("Insufficient  balance\n");
        }
    }
    else{
        printf("Invalid PIN\n");
    }
    return 0;
}