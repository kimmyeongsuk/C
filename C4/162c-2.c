#include <stdio.h>

int main()
{
    int data;      
    printf("16진수 정수를 입력하시오:"); 
    scanf("%x",&data);                          //문자를 16진수로 바꾸기 위해서 %x를 사용
    printf("8진수로는 %o입니다\n", data);       // 16진수 ----> 8진수 == %o를 사용함
    printf("10진수로는 %d입니다\n", data);      // 16진수-----> 10진수 == %d를 사용
    printf("16진수로는 %#x입니다", data);       // 16진수에 Ox를 붙여 나오게 하기 위해 %#xm를 사용

    return 0;
}