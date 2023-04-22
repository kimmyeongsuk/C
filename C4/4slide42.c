#include <stdio.h>

int main()
{ 
    int x, y;
    int price, a, b, c, d;

    printf("물건 값을 입력하시오:");
    scanf("%d", &price); //물건 값을 입력받는다.

    printf("투입한 금액을 입력하시오:");
    scanf("%d", &x); //물건 값을 입력받는다.
    y = x - price; //거스름돈을 y에 저장
    printf("거스름돈은 다음과 같습니다");

    b = y / 1000; //남은 잔돈에서 1000원권의 개수를 계산한다.
    y = y % 1000; //나머지 연산자를 사용하여 남은 잔돈을 계산한다.

    c = y / 500; //남은 잔돈에서 500원 동전의 개수를 계산한다.
    y = y % 500; //나머지 연산자를 사용하여 남은 잔돈을 계산한다.

    d = y / 100;
    y = y % 100;

    printf("\n천원권: %d장\n", b);
    printf("오백원 동전: %d개\n",c);
    printf("백원 동전: %d개\n", d);
}