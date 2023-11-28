#include<stdlib.h>
#include<stdio.h>

int main() {


    int i,number;
    int factorial=1;

    printf("Enter number:");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    for(i=1;i<=number;i++)
    printf("Conclusion: %d",factorial);
    
    return 0;
}