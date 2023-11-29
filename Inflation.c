#include <stdio.h>
#include <stdlib.h>

int main()
{
int  Entered;
int  RightofEntry=3;
int  Password=1234;
   float InvoiceToBePaid,OldUnitPrice,NewUnitPrice;
   float Inflation,OldSubscriberFee,NewSubscriberFee;
   int NewReading,OldReading,TotalSpentElectricity;

while(RightofEntry>0)
{
    printf("Please Enter Your Password\n");
    scanf("%d",&Entered);


    if(Entered==Password)
    {
    printf("***Welcome Your Account***\n");

    printf("Enter the inflation rate:");
    scanf("%f",&Inflation);

    printf("Enter the unit price amount for the previous month:");
    scanf("%f",&OldUnitPrice);

    printf("Enter the subscription fee for the previous month:");
    scanf("%f",&OldSubscriberFee);

    printf("Enter the reading for the previous month:");
    scanf("%d",&OldReading);

    printf("Enter this month's reading:");
    scanf("%d",&NewReading);

    TotalSpentElectricity = NewReading-OldReading;
    NewUnitPrice = OldUnitPrice*(1+Inflation/100);
    NewSubscriberFee = OldSubscriberFee*(1+Inflation/100);
    InvoiceToBePaid = TotalSpentElectricity*NewUnitPrice+NewSubscriberFee;
    printf("\n The invoice amount you will pay:%f\n\n",InvoiceToBePaid);


    break;
}

 else if(Entered!=Password)
    {
        RightofEntry--;
        printf("Remaining right of entry:%d\n",RightofEntry);
    }

}
if(RightofEntry==0){
        printf("your account has been blocked :D");
    }
}


