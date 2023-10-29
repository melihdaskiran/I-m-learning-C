#include <stdio.h>
#include <stdlib.h>

int main(){

    int number1,number2,number3,GPA;

    printf("number 1: ");
    scanf("%d",&number1);

    printf("number 2: ");
    scanf("%d",&number2);

    printf("number 3: ");
    scanf("%d",&number3);

    GPA= (number1+number2+number3)/3;
    
    if(GPA>=50)
    {
        printf("You passed the exam, GPA: %d ",GPA);



    }
    else
    {
        printf("You failed the exam. Please try again later. Your GPA: %d",GPA);


    }


    return 0;
}