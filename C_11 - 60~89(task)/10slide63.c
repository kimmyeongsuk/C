#include <stdio.h> //자동차 게임
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance) //main함수에 호출되기위해 함수를 설정함
{
    int i;                      //i로 변수 설정
    printf("CAR #%d:", car_number); 
    for(i = 0; i<distance/10; i++){ // '*'을 주어진 거리의 1/10마다 출력하는 for문
        printf("*");
    }
    printf("\n");
}
int main()
{
    int i;
    int car1_dist=0,car2_dist=0; //자동차 1,2를 초기화시켜줌

    srand((unsigned)time(NULL)); //난수 생성기를 초기화시켜줌

    for( i = 0; i < 6; i++ ) { //총 6번의 레이스를 진행시켜주는 for문
        car1_dist += rand() % 100; //rand()를 이용하여 난수를 발생시키고 %를 이용하여 0~99까지 제한시킴
        car2_dist += rand() % 100;
        disp_car(1, car1_dist); //disp_car이라는 함수를 호출시켜 실행시킴
        disp_car(2, car2_dist);
        printf("---------------------\n");
        _getch(); // 키보드에서 한개의 문자를 입력받는 역할을 수행함
    }
    return 0;
}