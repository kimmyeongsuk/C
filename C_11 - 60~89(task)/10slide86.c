#include <stdio.h> //공학용 계간시 프로그램 작성
#include <math.h>

int menu() //처음 menu를 출력하고 입력받는 함수를 설정함
{
    int n;
    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n);
    return n;
}

void factorial() //1번인 팩토리얼을 계산해주는 함수설정
{
    long long n, result=1, i; //팩토리얼을 큰 수를 사용하므로 long long 변수를 사용함
    printf("정수를 입력하시오: ");
    scanf("%lld", &n); //정수를 입력받음
    
    for (i = 1; i <= n; i++) //n과 i가 같을 때까지 실행하는 for문
        result = result * i; //팩토리얼을 계산하는 식
    printf("결과 = %lld\n\n", result); //for문이 끝나고 result값을 출력
}

void sine() // 2번인 싸인값을 계산하는 함수를 설정
{
    double a, result; // 소수점을 사용할 수 있게 double형을 변수 선언함

    printf("각도를 입력하시오: ");
    scanf("%lf", &a); //a는 각도를 입력받음
    result = sin(a); //싸인값을 계산하여 result 값을 나타내는 식
    printf("결과 = %lf\n\n", result); //result 값을 출력함
}

void logBase10() //3번인 로그를 계산하는 함수를 설정
{
    double a, result; //실수를 사용하므로 double형을 변수 선언
    printf("실수값을 입력하시오: ");
    scanf("%lf", &a); //실수를 입력받음
    
    if (a <= 0.0){ //만약 입력된 값이 0이하면 오류라고 출력
        printf("오류\n");}
    else {    //입력된 값이 0보다 크면 실행함
        result = log10(a); //로그를 구해주는 식
        printf("결과 = %lf\n\n", result); //result 값을 출력
    }
}

int main()
{
    while (1) { //메뉴를 사용하므로 switch문을 사용
        switch (menu()) { //menu함수를 호출시킴
    case 1:               // 1 번을 선택하면 factorial함수를 호출함
        factorial();
        break;
    case 2:              // 2 번을 선택하면 sine함수를 호출함
        sine();
        break;
    case 3:              // 3 번을 선택하면 logBase10함수를 호출함
        logBase10();
        break;
    case 7:              // 7 번을 선택시 종료합니다를 출력 후 실행을 종료시킴
        printf("종료합니다.\n");
        return 0;
    default:             // 없는 번호를 선택시 잘못된 선택입니다라고 출력 후 다시 실행함
        printf("잘못된 선택입니다.\n");
        break;
    }
}
}
