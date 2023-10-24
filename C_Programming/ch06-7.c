#include <stdio.h>
int main(void){
    float x,y;

    printf("체중과 키를 입력하시오:");
    scanf("%f%f",&x,&y);
    float z = (x-100)*0.9;
    
    if(z>y){
        printf("저체중입니다");
    } else if(z<y) {
        printf("과제충입니다.");
    } else if(z==y){
        printf("표준입니다");
    }
}


