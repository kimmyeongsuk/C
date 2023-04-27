#include <stdio.h>

int main()
{
    double x,y,z,sum,a;  // double형으로 변수를 선언함

    printf("3개의 실수를 입력하시오:");
    scanf("%lf %lf %lf", &x, &y, &z); 

    sum = x + y + z; // 3개의 실수를 더한 값
    a = sum / 3;      // 3개의 평균을 구하는 식

    printf("합계=%.2lf", sum); // %.2lf사용으로 소수점 두자리까지 출력
    printf("평균=%.2lf", a);

    return 0;
}