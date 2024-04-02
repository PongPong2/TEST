#include <stdio.h>

int main(void){
    int h,m;
    scanf("%d %d",&h,&m);
    
    if(h == 0)
        h = 24;

    int result;
    result = h * 60 + m - 45;
    h = result / 60;
    m = result % 60;
    
    if(h == 24)
        h = 0;
    
    printf("%d %d\n",h,m);
}