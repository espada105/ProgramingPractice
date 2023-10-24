#include <stdio.h>
int main(void)
{
	double dist, degree, circ, radius;

	printf("거리를 입력하시오:");
	scanf("%d", &dist);
	printf("각도를 입력하시오:");
	scanf("%d", &degree);

	circ = (360.0*900.0)/7.2;
	radius = circ/(2.0*3.14);
	printf("지구의 반지름은 %f \n", radius);

	return 0;
}