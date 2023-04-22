#include <stdio.h>

int main()
{
    int i, n, sum;

    i = 0;   //변수 초기화
    sum = 0;  //변수 초기화

    while (i < 5)
    {
        printf("값을 입력하시오:");
        scanf("%d", &n);
        sum =sum + n;   // sum += n;과 같음  ,  sum값에 n값을 5번할때까지 더함
        i++;             // i가 증가하면서 5일때 멈춤
    }
    printf("합계는 %d입니다.", sum);
    return 0;
}