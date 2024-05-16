 #include <stdio.h>
#include <string.h>

int main(void){
    int num;
    char a[80];
    int sum,count;
    
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        sum = 0;
        count = 1;
        scanf("%s", a);
        for(int j=0; j < strlen(a); j++){
            if(a[j] == 'O'){
                sum += count;
                count++;
            }
            else{
                count = 1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
