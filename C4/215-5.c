#include <stdio.h>

int main()
{
    int a;

    printf("정수를 입력하시오:");
    scanf("%d", &a);
    printf("\n");

    printf("십의 자리:%d\n일의 자리:%d", a/10, a%10);

    return 0;
}