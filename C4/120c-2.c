
#include <stdio.h> // 마일을 미터값으로 변환하기

int main()
{
    float a;
    
    printf("마일을 입력하시오:");
    scanf("%f", &a);
    printf("%.1f 마일은 %.2f미터입니다.", a, a*1609);

    return 0;
}