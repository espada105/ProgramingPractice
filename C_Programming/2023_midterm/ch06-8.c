#include <stdio.h>
int main(void){
    int time, age;

    printf("시간과 나이를 입력하세요");
    scanf("%d %d",&time,&age);

    if((age>=3&&age<=12||age>=65)){
        if(time<17){
            printf("25000원입니다.");
        }else{
            printf("10000원입니다.");
        }
        
    } else {
        if(time<17){
            printf("34000원입니다.");
        }else{
            printf("10000원입니다.");
        }
        
        
    }
}