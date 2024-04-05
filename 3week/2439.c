#include <stdio.h>

int main(void){
    int num;
    scanf("%d",&num);
    for(int i=1 ; i<=num; i++){
        for(int j=num ; i<j; j--){
            printf(" ");
        }
        for(int a=1 ; a<=i; a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
