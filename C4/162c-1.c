#include <stdio.h>

int main()
{
    double mis; // 실수형식으로 나타내기위해 double형을 사용

    printf("실수를 입력하시오:"); 
    scanf("%lf", &mis);            // double형의 형식지정자인 %lf를 사용
    printf("실수형식으로는 %.6lf입니다\n", mis);  //소수점 6자리까지 나타내기위해서 %.6lf를 사용
    printf("지수형식으로는 %e입니다",  mis);   // 지수형식을 출력하는 %e를 사용함

    return 0;
} 