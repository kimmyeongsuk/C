#include <stdio.h>

int main()
{
    float radius;   //radius = 반지름
    float area;     //area = 원의 면적

    printf("반지름을 입력하시오:");
    scanf("%f", &radius);
    
    area = 3.14 * radius * radius; // 원의 면적을 구하는 식을 만들어줌

    printf("원의 면적:%f", area);

    return 0;
}
