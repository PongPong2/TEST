#include <stdio.h>

int main (void){
    int num;
    int max=0, count1=0,count2=0;
    for(int i=0; i<9; i++){
        scanf("%d",&num);
        count1++;
        if(num > max){
            max = num;
            count2 = count1;
        }
    }
    printf("%d\n%d\n",max,count2);
    return 0;

}
