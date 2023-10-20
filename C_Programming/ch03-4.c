#include <stdio.h>
int main(void){
int a;
double b;

printf("화씨값을 입력하시오: ");
scanf_s("%d",&a);

b = (5.0/9.0)*(a - 32.0);
printf("섭씨값은 %lf 도 입니다.",b);

return 0;

}