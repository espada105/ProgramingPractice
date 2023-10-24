#include<stdio.h>


int main(void) {
	const double pm = 3.3058;
	double x;
	
	printf("입력");
	scanf_s("%lf",&x);
	printf("%lf", x * pm);

	return 0;
}