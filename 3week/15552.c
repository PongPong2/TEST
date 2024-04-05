#include <stdio.h>

int main(void){
    int num1,num2,num3;
    
    scanf("%d",&num1);
    for(int i=0; i<num1; num1--){
        scanf("%d %d",&num2,&num3);
        printf("Case %d: %d\n",i,num2+num3);
    }
    return 0;
}
