#include <stdio.h>

int main(void) {
    int x, y;

    printf("x와 y좌표를 입력하시오: ");
    scanf("%d %d", &x, &y);

    (x > 0 && y > 0) ? printf("1사분면") : printf("");
    (x > 0 && y < 0) ? printf("2사분면") : printf("");
    (x < 0 && y > 0) ? printf("3사분면") : printf("");
    (x < 0 && y < 0) ? printf("4사분면") : printf("");


    return 0;
}
