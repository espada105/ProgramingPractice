#include <stdio.h>

#define taxrate 0.2

int main(void){
    const int months = 12;
    int m_salary, y_salary;

    printf("월급을 입력하시오: ");
    scanf_s("%d",&m_salary);

    y_salary = months*m_salary;
    printf("연봉은 %d입니다.\n",y_salary);
    printf("세금은 %f입니다.\n",y_salary*taxrate);

    return 0;
}