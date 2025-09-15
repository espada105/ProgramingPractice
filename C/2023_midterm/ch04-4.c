#include <stdio.h>

int main(void) {
	double x,y,z;
	
	printf("가로 세로 높이를 입력하세요");
	scanf_s("%lf%lf%lf",&x,&y,&z);

	
	printf("상자의 부피는 %lf입니다", x*y*z);

	return 0;
}