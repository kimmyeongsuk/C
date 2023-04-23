#include <stdio.h>

int main()
{
    double a, b, c;  // a = 가로, b = 세로, c = 높이 

    printf("상자의 가로 세로 높이를 한번에 입력:"); 
    scanf("%lf %lf %lf", &a, &b, &c);  // a b c순서대로 스캔함
    printf("상자의 부피는 %.6lf", a*b*c);  // 가로*높이*세로 값을 출력

    return 0;
}