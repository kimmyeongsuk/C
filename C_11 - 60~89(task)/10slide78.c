#include <stdio.h>//시간 맞추기 게임
#include <time.h>

int main()
{
    time_t start, end; // 시간을 시작과 종료를 저장하기 위해 변수 설정
    start = time(NULL); //현재시간으로 시작 시간을 저장하혀 시간을 잴 수 있게 해줌
    printf("10초가 되면 아무 키나 누르세요\n"); 
    while (1) { //while문이 참일때까지 실행함
        if (getchar()){ //만약 사용자가 키를 누르면 while문을 빠져나옴
            break;}
    }
    printf("종료되었습니다.\n");
    end = time(NULL); //키를 누른 시간을 종료 시간으로 저장한다
    printf("경과된 시간은 %ld 초입니다. \n", end - start);// 종료 시간에서 시작 시간을 빼 몇 초가 
                                                         // 지났는지 출력해줌       
    return 0;
}