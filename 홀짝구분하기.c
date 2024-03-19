//홀짝 구분하기

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    if(a>0 && a<1001){
        if(a % 2 == 0){
            printf("%d is even", a);
        }else{
            printf("%d is odd", a);
        }
    }else{
        printf("1~1000사이의 숫자를 입력하세요")
    }

    return 0;
}

