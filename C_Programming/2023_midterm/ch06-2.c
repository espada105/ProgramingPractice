#include <stdio.h>

int main(void){
    int x,y,z;
    int min;
    printf("정수 3개를 입력하시오:");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y){
        min = y;
    }

    if(min>z){
        min = z;
    }

    printf("제일 작은 수는%d",min);



}