#include <stdio.h>

int main(void) {
    float x;

    printf("실수를 입력하시오: ");
    scanf("%f", &x);

    printf("실수형식으로는 %f 입니다\n", x);
    printf("지수형식으로는 %e 입니다\n", x);

    return 0;
}
