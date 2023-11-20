#include <stdio.h>

int main(void){
    int n;
    int i = 1;
    printf("입력하고 싶은 단을 입력하세요");
    scanf("%d",&n);

    while(i <= 9 ){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }



}