#include <stdio.h>

int main() {
    int n;

    // 사용자로부터 정수 입력 받기
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    // 삼각형 윗 부분 출력
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 삼각형 아랫 부분 출력
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
