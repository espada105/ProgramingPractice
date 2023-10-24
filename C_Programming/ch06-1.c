#include <stdio.h>

int main(void){
    printf("정수를 입력하시오");
    int x;
    scanf("%d",&x);
    printf("정수를 입력하시오");
    int y;
    scanf("%d",&y);

    if(x%y==0){
        printf("약수입니다.");
    }


}