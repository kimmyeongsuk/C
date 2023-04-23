#include <stdio.h> // 연봉으로 10억모으는데 걸린 시간 구하기

int main()
{
    int a; // a:연봉 

    double b = 100000; // 연봉의 단위가 만원이기때문에 10억도 10000을 나눠줌

    printf("연봉을 입력하시오(단위는 만원):"); 
    scanf("%d", &a);  // 
    printf("10억을 모으는데 걸리는 시간(단위: 년):%.2lf", b/a); //

    return 0;
}