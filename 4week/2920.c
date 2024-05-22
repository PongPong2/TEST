#include <stdio.h>

int main(void){
    int melody[8] = {0};
    int check = 0;
    for(int i=0; i<8; i++){
        scanf("%d",&melody[i]);
    }
    
    //상향 음계인지 확인
    if(melody[0] == 1){
        for(int j=1; j<8; j++){
            if(melody[j] == j+1){
                check = 1;
            }
            else{
                check = 0;
                break;
            }
        }
    }
    
    //하향 음계인지 확인
    else if (melody[0] == 8){
        for(int l=1; l<8; l++){
            if(melody[l] == 8 - l){
                check = 2;
            }
            else{
                check = 0;
                break;
            }
        }
    }
    if(check == 1){
        printf("ascending\n");
    }
    else if(check == 2){
        printf("descending\n");
    }
    else{
        printf("mixed\n");
    }
    return 0;
}
