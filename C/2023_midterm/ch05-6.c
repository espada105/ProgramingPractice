#include <stdio.h>
#include <math.h>
int main(void){
    int x;
    x = fabs((1.0-0.9==0.1) < 0.000001);
    printf("1.0-0.9==1은 %d 입니다.",x);

    return 0;




}