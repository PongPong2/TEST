#include <stdio.h>

int main(void){
    int num;
    
    scanf("%d",&num);
    if(1000<=num && num<= 3000){
        printf("%d\n",num-543);
    }
    
    return 0;
}
