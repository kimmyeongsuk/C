#include <stdio.h>

int  main()
{
    int i,n,sum;

    printf("정수를 입력하시오:");
    scanf("%d", &n);

    i = 1; 
    sum = 0;

    while (i <= n)
    {
        if(i %2==0)
        sum = sum + i;
        i++;
    }
    printf("1부터 %d까지의 짝수합은 %d입니다\n",n,sum);
}