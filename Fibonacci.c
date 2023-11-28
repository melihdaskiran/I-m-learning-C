#include<stdlib.h>
#include<stdio.h>

int main() {

    int a, b, c, i, number;
    
    a=1;
    b=1;
    
    printf("Enter number:");
    scanf("%d",&number);
    
    printf("%d\n%d\n",a,b);

    for(i=1;i<=number;i++)
    {
        c=a+b;
        a=b;
        b=c;

        printf("%d\n",c);
    }

    return 0;
}