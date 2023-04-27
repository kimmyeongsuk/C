#include <stdio.h>

int main()
{
    int x,y,sum; // 첫번째 숫자를 x, 두번째 숫자를 y, sum으로 변수를 선언함

    printf("첫번째 숫자를 입력하시오:"); 
    scanf("%d", &x);                        //첫번째 숫자를 입력하기위해 scanf를 사용
    printf("두번째 숫자를 입력하시오:");
    scanf("%d", &y);                        //두번째 숫자를 입력하기위해 scanf를 사용
  
    sum = x + y; // 변수 x,y를 더함  

    printf("두 수의 합:%d",sum);            //두 수의 합을 출력함

    return 0;
}