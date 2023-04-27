#include <stdio.h>

int main()
{
    double rate, usd; //rate = 환율,  usd = 달러화
    int won;        // 원화
    
    printf("환율을 입력하시오:");
    scanf("%lf", &rate);
    printf("원화 금액을 입력하시오:");
    scanf("%d", &won);

    usd = won / rate; // 달러화를 시켜주기 위해 원화를 환율로 나눔

    printf("원화 %d원은 %lf달러입니다.", won, usd);

    return 0;
}