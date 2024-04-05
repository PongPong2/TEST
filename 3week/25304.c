#include <stdio.h>

int main(void){
    int num1,num2,num3,num4;
    
    int result,total=0;
    scanf("%d\n%d",&num1,&num2);
    for(int i=0; i<num2; i++){
        scanf("%d %d",&num3,&num4);
        result = num3*num4;
        total += result;
    }
        if(num1 == total){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    return 0;
}
