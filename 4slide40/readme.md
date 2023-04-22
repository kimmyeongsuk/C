#include <stdio.h>//증감 연산자

int main()
{ 
    int x =10, y = 10;

    printf("x=%d\n", x);
    printf("++x의 값=%d\n", ++x); //++x는 먼저 1을 더하고 나옴
    printf("x=%d\n\n",x);

    printf("y=%d\n", y);
    printf("y++의 값=%d\n", y++); // x++은 값이 나오고 더함
    printf("x=%d\n",y);

    return 0;

}
