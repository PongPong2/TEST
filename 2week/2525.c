#include <stdio.h>

int main(void){
    int h,m1,m2;
    int result;
    scanf("%d %d %d",&h,&m1,&m2);
    
    if(h==0){
        h = 24;
    }
    result = (h*60)+m1+m2;
    h = result/60;
    m1 = result%60;
    if(h>=24){
        h = h-24;
    }
    printf("%d %d\n",h,m1);
    return 0;
}

