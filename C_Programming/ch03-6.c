#include <stdio.h>
int main(void){
    double x,y;

    printf("몸무게를 입력하시오(단위: kg");
    scanf_s("%lf",&x);

    y = x*17/100;
    printf("달에서의 몸무게는 %lf",y);
    return 0;
}