#include <stdio.h>
#include <stdlib.h>

int main() {
//variables
    int edge1,edge2,area,environment;

    printf("*********************Area and Environment Calculation***********************\n");
//get data from user
    printf("first side length: ");
    scanf("%d",&edge1);

    printf("second side length: ");
    scanf("%d",&edge2);
//calculations
    area=edge1*edge2;
    environment=(edge1+edge2)*2 ;
//Printing calculations made with data received from users to the screen
    printf("Area: %d m2 \n",area);
    printf("Environment %d cm\n",environment);

    printf("*****************************************************************************");

    return 0;
}