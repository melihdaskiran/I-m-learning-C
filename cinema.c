#include <stdio.h>
#include <stdlib.h>

int main() {

    int corn,coke,water,ticket,total; 

    printf("*************Shop************\n");
//Getting information from the user about how many products he/she purchased
    printf("How many boxes of corn did you buy? :  \n");
    scanf("%d",&corn);

    printf("How many cokes did you buy? : \n");
    scanf("%d",&coke);

    printf("How many bottles of water did you buy? : \n");
    scanf("%d",&water);

    printf("how many tickets did you buy? : \n");
    scanf("%d",&ticket);
//Multiplying the values received from the user by the product price and summing the prices of the purchased products
    total=corn*2+coke*2+water*1+ticket*8;
    printf("Total fee: %d",total);

    return 0;
}