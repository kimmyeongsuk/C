#include <math.h> //삼각함수를 사용하기 위한 헤더 파일임
#include <stdio.h>// 나무 높이 측정하기

int main()
{
    double height, distance, tree_height, degrees, radians; //키,나무길이,나무높이,각도,라디안값을 double 형으로 변수 선언함

    printf("나무와의 길이(단위는 미터): "); 
    scanf("%lf", &distance);                //나무와의 거리를 입력받는다
    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);                  //측정자의 키를 입력받는다
    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);                 //각도를 입력받는다

    radians = degrees * (3.141592 / 180.0);//입력받은 각도를 이용하여서 라디안갑으로 변환을 시켜준다
    tree_height = tan(radians) * distance + height;  //삼각함수를 이용하여 나무의 높이를 구해주는 식이다

    printf("나무의 높이(단위는 미터): %lf \n", tree_height); //구한 나무의 높이를 출력한다

    return 0;
}