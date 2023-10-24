#include <stdio.h>

int main(void){
    const double pi = 3.14;
    double x;

    printf("구의 반지름을 입력하시오: ");
    scanf("%lf",&x);
    printf("표면적은 %.2lf입니다.\n",4*pi*x*x);
    printf("체적은 %.2lf입니다.",4.0/3*pi*x*x*x);


    
}