#include <stdio.h>

int main()
{
    int a,b;

    printf("정수 2개를 입력하시오:");
    scanf("%d %d",&a, &b);
    printf("\n");

    printf("몫:%d\n",a/b);
    printf("나머지 %d",a%b);

    return 0;
}