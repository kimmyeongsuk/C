#include <stdio.h> // 구구단 중 출력하고 싶은 단을 출력하는 프로그램

int main()
{
    int n;
    int i = 1;

    printf("출력하고 싶은 단:");
    scanf("%d", &n);

    while (i <= 9)
    {
        printf("%d*%d\n",n,i,n*i);
        i++;
    }
    return 0;
}