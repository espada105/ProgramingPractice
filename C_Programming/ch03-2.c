#include <stdio.h>

int main(void){
    double mile,meter;
    printf("마일을 입력하시오:");
    scanf_s("%lf",&mile);
    meter = mile * 1609.0;
    printf("%lf은 %lf 미터 입니다",mile,meter);
    return 0;
}