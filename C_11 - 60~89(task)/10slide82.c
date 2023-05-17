#include <stdio.h>//삼각함수 그리기
#include <math.h>
#define PI 3.141592 //pi 값을 상수로 정의해줌

double rad(double degree) //각도를 rad값으로 변환하는 double형의 함수 설정함
{
    return PI * degree / 180.0; // 각도를 rad값으로 변환하는 값으로 리턴함
}

void drawbar(int height)  // 별을 나타내는 함수를 만듦
{
    for (int i = 0; i < height; i++) //height까지 '*'을 출력하는 for문
        printf("*");
    printf("\n");
}   
int main()
{
    int degree, x, y; 
    
    for (degree = 0; degree <= 90; degree += 10) { // 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭한다.
        y = (int)(60 * sin(rad((double)degree)) + 0.5); //sin함수을 이용하여 y의 값을 계산하는 식
        drawbar(y); //drawbar 함수를 호출하여 '*'을 출력함
    }
    return 0;
}
