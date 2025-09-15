#include <stdio.h>
int main(void){
    int a,b,c;
    for(a = 1; a <= 100; a ++){
        for(b = a; b <= 100; b ++){
            for(c = b; c <= 100; c ++){
                if((a*a+b*b==c*c))
                printf("%d %d %d \n 
                0",a,b,c);
            }
        }
    }
    return 0;
}