#include <stdio.h>

int main() {
    char input;

    while (1) {
        // 사용자로부터 문자 입력 받기
        printf("문자를 입력하시오: ");
        scanf(" %c", &input);

        // 입력된 문자에 따라 처리
        switch (input) {
            case 'R':
            case 'r':
                printf("Rectangle\n");
                break;
            case 'T':
            case 't':
                printf("Triangle\n");
                break;
            case 'C':
            case 'c':
                printf("Circle\n");
                break;
            case 'Q':
            case 'q':
                printf("프로그램 종료!\n");
                return 0;  // 프로그램 종료
            default:
                printf("Unknown\n");
        }
    }

    return 0;
}
