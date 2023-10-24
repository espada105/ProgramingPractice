#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    srand(time(NULL));

    int x,number;
    printf("복권번호를 입력하시오(0~99)");
    scanf("%d",&x);

    int x1 = x/10;
    int x2 = x%10;

    number = rand()%100;

    int y1 = number/10;
    int y2 = number%10;


    if(x1 == y1 ){
        if(x2 == y2 ){
            printf("100만원입니다");
        } else {
            printf("50만원입니다");
        }
    } else {
        if(x2 == y2 ){
            printf("50만원입니다");
        } else {
            printf("0원입니다");
        }
    }
}