#include <stdio.h>

int main(void){
    int num,total;
    scanf("%d",&num);
    
    total = 0;
    for(int i=0; i<=num; i++){
        total+=i;
    }
    printf("%d\n",total);
    return 0;
}
