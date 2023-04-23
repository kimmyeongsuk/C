#include <stdio.h> // 삼각형 넓이 구하기

int main()
{
    double a, b;
    
    printf("삼각형의 밑변:");
    scanf("%lf", &a);
    printf("삼각형의 높이:");
    scanf("%lf", &b);
    printf("삼각형의 넓이:%.2lf", 0.5*a*b); // .00 위해 실수형 사용

    return 0;
}