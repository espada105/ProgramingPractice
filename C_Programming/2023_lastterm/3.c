#include <stdio.h>
#include <math.h>

// 각도를 라디안으로 변환하는 함수
double degreesToRadians(double degrees) {
    const double pi = 3.14159265358979323846;
    return (pi * degrees) / 180.0;
}

int main() {
    // 0도부터 180도까지 10도 단위로 코사인 값을 출력
    printf("각도\t코사인 값\n");
    for (int angle = 0; angle <= 180; angle += 10) {
        double radians = degreesToRadians(angle);
        double cosineValue = cos(radians);
        printf("cos(%lf)\t%lf\n", (double)angle, cosineValue);
    }

    // 사용자로부터 각도를 입력받아 코사인 값을 출력
    int userAngle;
    printf("\n각도를 입력하세요: ");
    scanf("%d", &userAngle);

    double userRadians = degreesToRadians(userAngle);
    double userCosineValue = cos(userRadians);

    printf("cos(%d)\t%lf\n", userAngle, userCosineValue);

    return 0;
}
