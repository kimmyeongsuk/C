#include <stdio.h>

int main()
{
    int a, b, c;
    int max;

    printf("정수 3개를 입력하시오:");
    scanf("%d %d %d", &a, &b, &c);

    max = ( a > b) ? a: b;
    max = ( max > c) ? max: c;

    printf("최대값은 %d입니다.",max);

    return 0;
}