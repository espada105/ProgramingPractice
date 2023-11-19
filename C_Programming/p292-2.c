#include <stdio.h>
int main(void){
    int a,b,c;
for(a = 1; a <= 6; a ++){
    for(b = a; b <= 6; b ++){
        if((a+b==6))
            printf("(%d , %d) \n ",a,b);
    }
}
printf("-------------------------------------------\n");

for(a = 1; a <= 100; a ++){
    for(b = a; b <= 100; b ++){
        for(c = b; c <= 100; c ++){
            if((a+b+c == 10))
                printf("(%d , %d , %d) \n ",a,b,c);
        }
    }
}
return 0;


}