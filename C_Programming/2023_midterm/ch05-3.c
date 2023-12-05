#include <stdio.h>

int main(void){
    int x,y,z;
    int max = 0;
    
    printf("정수3 개를 입력하시오:");
    scanf("%d %d %d",&x,&y,&z);
    
    max = (x>y)?x:y;
    max = (max>z)?max:z;


    printf("최대값은 %d 입니다",max);
}