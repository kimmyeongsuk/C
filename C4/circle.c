#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float radious;
    float area;
    
    printf("반지름을 입력하시오:");
    scanf("%f", &radious);
    
    area = 3.14 * radious * radious;

    printf("원의 면적: %f\n",area);

    return 0;
}