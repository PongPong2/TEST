#include <stdio.h>

int main(void){
    int num;
    int max=0;
    int count=0;
    
    for(int i=0; i<5; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            scanf("%d",&num);
            sum += num;
            if(sum > max){
                max = sum;
                count = i+1;
            }
        }
    }
    printf("%d %d\n",count,max);
    return 0;
}
