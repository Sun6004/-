// 문자열 돌리기

#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s\n", s1);
    int len = strlen(s1);
    if(len >0 && len <11){
        for(int i =0; i < len; i++){
            printf("%c\n", s1[i]);
        }
    }
       
    return 0;
}
