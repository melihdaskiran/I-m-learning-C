#include <stdio.h>
#include <stdlib.h>
#include <math.h>
       
    int main(){
    
        int x,y;
        int Conclusion;
        printf("Base:");
        scanf("%d",&x);

        printf("Exp: ");
        scanf("%d",&y);

        Conclusion=pow(x,y);
        printf("Conclusion: %d",Conclusion);

	return 0;
}
