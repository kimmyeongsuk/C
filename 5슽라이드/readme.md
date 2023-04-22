#include <stdio.h> // 음수인지 양수인지 구분해줌

int main()
{
    int number;

    printf ("정수를 입력하시오:");
    scanf("%d",&number);

    if( number > 0){
        printf("양수입니다.\n");
    }
    else
        printf("음수입니다\n");
    
    printf("입력된 값은 %d입니다.", number);

    return 0;
}
