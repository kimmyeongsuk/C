#include <stdio.h>  //동전 던지기 게임
#include <stdlib.h>
#include <time.h>

int coin_toss(); //동전을 던지기 위해 함수를 선언함

int main()
{
    int toss;
    int heads =0;  //동전의 앞면을 세기위해서 변수 heads를 초기화시켜줌
    int tails = 0; //동전의 뒷면을 세기위해서 변수 tails를 초기화시켜줌
    srand((unsigned)time(NULL));  //난수를 생성하기위해 난수를 설정함

    for(toss=0; toss<100; toss++){ //for문을 이용하여 100번 동전던지기
        if(coin_toss() ==1)     // 동전을 던지고 그 값이 1이면 앞면을 의미하여 heads에 1씩 더함
            heads++;
        else                    // 동전을 던지고 그 값이 0이면 뒷면의 의미하여 tails에 1씩 더함  
            tails++;
    }
    printf("동전의 앞면:%d\n",heads); //for문이 끝나고 heads의 결과값을 나타냄
    printf("동전의 뒷면: %d \n", tails); //for문이 끝나고 tails의 결과값을 나타냄
    return 0;
}

int coin_toss(void) //동전 던지기 함수 
{
    int head = rand() % 2 ; //동전을 던져 head의 값이 0이나 1이 되도록 하고 난수를 생성
    return head; //생성된 난수를  반환한다
}