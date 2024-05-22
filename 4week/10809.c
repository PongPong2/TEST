#include <stdio.h>
#include <string.h>

int main(void){
    char str[100];
    int a[26];
    int index;
    long len;
    
    for(int i=0; i<26; i++){
        a[i] = -1;
    }
    scanf("%s",str);
    len = strlen(str);
    
    for(int j=0; j<len; j++){
        index = str[j] - 'a';
        if(a[index] == -1){
            a[index] = j;
        }
        else {
            continue;
        }
    }
    for(int l=0; l<26; l++){
        printf("%d ",a[l]);
    }
    printf("\n");
    return 0;
}
