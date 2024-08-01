#include <stdio.h>
#include <stdlib.h>

int main()
 {    
        double temprature, convertedTemp;
        int choice;
        
        printf("Welcome to the temperature conversion program\n");
        printf("Enter the temperature value you want to convert: ");
        scanf("%lf",&temprature);


        printf("Select\n");
        printf("1 - Celsius to Fahrenheit\n");
        printf("2 - Celsius to Kelvin\n");
        printf("3 - Fahrenheit to Celsius\n");
        printf("4 - Fahrenheit to Kelvin\n");
        printf("5 - Kelvin to Celsius\n");
        printf("6 - Kelvin to Fahrenheit\n");
            scanf("%d", &choice);

        switch(choice){
            case 1: 
                convertedTemp = (temprature* 9/5) + 32;
                    printf("sonuc:%.2lf fahrenheit\n ", convertedTemp);
                        break;
            case 2:
                convertedTemp = (temprature + 273.15);
                    printf("sonuc:%.2lf kelvin\n ", convertedTemp);
                        break;
            case 3:
                convertedTemp = (temprature - 32)*5/9;
                    printf("sonuc:%.2lf Celcius\n ", convertedTemp);
                        break;
            case 4:
                convertedTemp = (temprature - 32)*5/9 +273.15;
                    printf("sonuc:%.2lf Kelvin\n ", convertedTemp);
                        break;                
            case 5:
                convertedTemp = temprature - 273.15;
                    printf("sonuc:%.2lf Celcius\n ", convertedTemp);
                        break;
            case 6:
                convertedTemp = (temprature - 273.15)* 9/5 + 32;
                    printf("sonuc:%.2lf Fahrenheit\n ", convertedTemp);
                        break; 
            default:
                printf("The number you choose must be from 1 to 6\n");
                printf("1 - Celsius to Fahrenheit\n");
                printf("2 - Celsius to Kelvin\n");
                printf("3 - Fahrenheit to Celsius\n");
                printf("4 - Fahrenheit to Kelvin\n");
                printf("5 - Kelvin to Celsius\n");
                printf("6 - Kelvin to Fahrenheit\n");
                    scanf("%d", &choice);
                        break;
            }

    return 0;
}
