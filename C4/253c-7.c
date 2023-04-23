#include <stdio.h>

int main()
{
    double kg, cm, a;
 
    printf("체중과 키를 입력하시오:");
    scanf("%lf %lf", &kg, &cm);

    a = (cm - 100) * 0.9;

    if( a > kg){
        printf("저체중입니다.");
    }
    else if (a == kg)
    {
        printf("표준입니다.");
    }
    else{
        printf("과체중입니다.");
    }
    return 0;
}