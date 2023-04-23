#include <stdio.h> // 섭씨온도 구하기

int main()
{
    double F; 

    printf("화씨값을 입력하시오:");
    scanf("%lf", &F);
    printf("섭씨값은 %.2lf도 입니다.", (5.0/9.0)*(F-32.0));

    return 0;
}