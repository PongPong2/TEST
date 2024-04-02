#include <stdio.h>

int main(void){
    int num;
    
    scanf("%d",&num);
    if((!(num%100 == 0) || num%400 == 0) && num%4==0){
            printf("1\n");
        }
    else{
            printf("0\n");
        }
    return 0;
}
