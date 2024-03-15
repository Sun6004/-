#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    scanf("%d %d", &a, &b);
    if(a > 0 && b < 101){
        c = a+b;
        printf("%d + %d = %d", a , b , c);
    }
    return 0;
}
