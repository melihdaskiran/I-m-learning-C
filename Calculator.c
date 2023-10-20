#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
 {
//variables
    int Number1,Number2,total,multiplication,division,extraction;
	
//get data from user

    printf("Number1: ");
	scanf("%d",&Number1);

	printf("Number2: ");
	scanf("%d",&Number2);
//calculations
    total=Number1+Number2;
    extraction=Number1-Number2;
    multiplication=Number1*Number2;
    division=Number1/Number2;
//Printing calculations made with data received from users to the screen
    printf("********************Results********************\n");
    printf("Total:  %d \n",total);
    printf("Extraction:  %d \n",extraction);
    printf("Multiplication:  %d \n",multiplication);
    printf("Divide:  %d \n",division);
    printf("***********************************************");
    getch();    
    return 0;
}