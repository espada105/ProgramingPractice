#include <stdio.h>
int main(void){
    int a,b;
    float c;
    printf("삼각형의 밑변: ");
    scanf_s("%d",&a);

    printf("삼각형의 높이: ");
    scanf_s("%d",&b);

    c = a * b * 0.5;
    printf("삼각형의 넓이: %lf",c);
    
    return 0;


}