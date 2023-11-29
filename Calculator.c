#include <stdio.h>
#include <stdlib.h>

int main()
 {
//variables
    int Number1,Number2,total,multiplication,division,extraction;
	char process;
//get data from user

    printf("Number1: ");
	scanf("%d",&Number1);

	printf("Number2: ");
	scanf("%d",&Number2);
    
    printf("Total: T\nExtraction: E\nMultiplication: M\nDivide: D\n");
    
    printf("islem seciniz: ");
    scanf(" %c", &process);

//calculations
    total=Number1+Number2;
    extraction=Number1-Number2;
    multiplication=Number1*Number2;
    division=Number1/Number2;
//Printing calculations made with data received from users to the screen
    printf("********************Results********************\n");
    switch(process){
    case 'T':
        printf("Total:  %d \n",total);
        break;
    case 'E':
        printf("Extraction:  %d \n",extraction);
        break;
    case 'M':
        printf("Multiplication:  %d \n",multiplication);
        break;
    case 'D':
        printf("Divide:  %d \n",division);
        break;
    }

    printf("***********************************************");
    
    return 0;
}
