#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
   if(a > -99999 && b < 99999){
       printf("a = %d\nb = %d", a , b); 
   }
    return 0;
}