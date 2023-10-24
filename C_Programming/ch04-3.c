#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 20;
    int z;

    z = x;
    x = y;
    y = z;

    printf("x는 %d,y는%d",x,y);

    return 0;


}
