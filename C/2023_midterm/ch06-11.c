#include <stdio.h>
int main(void){
    

    printf("문자를 입력하시오:");
    char first = getchar();

    
    if(first=='T'||first=='t'){
        printf("Triangle");
    }else if(first=='R'||first=='r'){
        printf("Rectangle");
    }else if(first=='C'||first=='c'){
        printf("Circle");
    }

    return 0;
}