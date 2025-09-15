#include <stdio.h>
int main(void){
    double x,y;

    printf("질량(kg):");
    scanf("%lf",&x);
    printf("속도(m/s):");
    scanf("%lf",&y);
    printf("운동에너지(J): %lf",x*x*y);


}