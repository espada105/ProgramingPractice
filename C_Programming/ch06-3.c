#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int player,computer;
    
    printf("1:가위 2:바위 3:보 중에서 하나를 선택하시오");
    scanf("%d",&player);

    srand((unsigned int)time(NULL));
    computer = (rand()%3+1);

    if (computer ==1){
        printf("컴퓨터=가위");
    }else if (computer ==2){
        printf("컴퓨터=바위");
    }else{
        printf("컴퓨터=보");
    }

    if(computer == player){
        printf("비겼습니다");
    } else if (computer > player){
        printf("졌습니다");
    } else if (computer < player){
        printf("이겼습니다");
    }



}