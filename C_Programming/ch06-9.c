#include <stdio.h>

int main(void){
    float x;
    printf("x의 값을 입력하시오");

    scanf("%f",&x);

    if(x<=0){
        printf("x의 값은%f 입니다",x*x-9*x+2);
    } else {
        printf("x의 값은%f 입니다",7*x+2);
    }

}