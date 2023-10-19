#include <stdio.h>

int main(void){
    int money;
    printf("연봉입력");
    scanf_s("%d",&money);
    int x = 100000000 / money;
    printf("10억을모으는데 걸리는 시간(단위: 년): %d",x);
    return 0;
}