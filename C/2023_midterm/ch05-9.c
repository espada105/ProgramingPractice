#include <stdio.h>

int main(void){
    double j_height, j_shadow, topiramid,piramidheight;

    printf("지팡이의 높이를 입력하시오:");
    scanf("%lf",&j_height);
    printf("지팡이 그림자의 길이를 입력하시오:");
    scanf("%lf",&j_shadow);
    printf("피라미드까지의 거리를 입력하시오:");
    scanf("%lf",&topiramid);
    piramidheight=(topiramid*j_height)/j_shadow;
    printf("피라미드의 높이는 %lf 입니다.",piramidheight);

}