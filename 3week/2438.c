#include <stdio.h>

int main(void){
    int num1,num2,num3;
    
    scanf("%d",&num1);
    for(int i=1; i<=num1; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
