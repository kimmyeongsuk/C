#include <stdio.h>

int main()
{
    double w,h,area,perimeter; //w = 가로 길이, h = 세로 길이, area = 넓이, perimeter = 둘레

    w = 10.0;  
    h = 5.0;
    area = w*h;
    perimeter = 2*(w+h);

    printf("사각형의 넓이:%lf", area);
    printf("사각형의 둘레:%lf", perimeter);

    return 0;
}