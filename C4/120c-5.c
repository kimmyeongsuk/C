#include <stdio.h> // 다항식 값 구하기

int main()
{
    float pol;
    printf("실수를 입력하시오:");
    scanf("%f", &pol);
    printf("다항식의 값은%.2f", 3*pol*pol+7*pol+11);

    return 0;
}