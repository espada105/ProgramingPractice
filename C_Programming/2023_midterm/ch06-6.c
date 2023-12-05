#include <stdio.h>

int main(void){
    char x;
    printf("문자를 입력하시오:");
    scanf("%c",&x);

    switch(x){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("모음입니다.");
            break;
        default:
            printf("자음입니다");
    }
    return 0;


}