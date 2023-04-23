#include <stdio.h>

int main()
{
    double kg;

    printf("몸무게를 입력하시오(단위:kg):");
    scanf("%lf",&kg);
    printf("몸무게는 %.2lfkg입니다.", kg*0.17);

    return 0;
}