#include <stdio.h>
int main(void){
    double x,inchi;
    double z;

    printf("키를 입력하세요:");
    scanf("%lf",&x);

    inchi = x/2.54;
    z = inchi /12;
    
    printf("%lf cm는 %.0lf 피트 %.2lf인치 입니다.",x,z,inchi);

    return 0;
}