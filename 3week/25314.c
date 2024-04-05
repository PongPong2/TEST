#include <stdio.h>

int main(void){
    int num,byte;
    scanf("%d",&num);
    
    byte = num/4;
    if(num%4==0){
        for(int i=0; i<byte; i++){
            printf("long ");
        }
   
    }
    printf("int");
    printf("\n");
    return 0;
}
