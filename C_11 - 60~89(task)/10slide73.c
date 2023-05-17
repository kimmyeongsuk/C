#include <math.h> //삼각 함수 라이브러리
#include <stdio.h>

int main()
{ 
    double pi = 3.1415926535;
    double x, y;        //pi는 무한소수이기때문에 double형을 사용함

    x = pi / 2; // pi에서 2를 나누면 1.570796으로 변함
    y = sin( x );   // sin(pi/2) = 1이므로 y는 1
    printf( "sin( %f ) = %f\n", x, y ); //y 값을 출력하여 1을 출력
    y = cos( x );  // cos(pi/2) = 0이므로 y값이 0
    printf( "cos( %f ) = %f\n", x, y ); //2번째 y값을 출력시켜 0을 출력
}