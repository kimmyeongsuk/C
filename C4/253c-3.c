#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int a, answer;
    srand((int)time(NULL));
    
    answer = rand()%3+1;

    printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오:");
    scanf("%d",&a);
    printf("컴퓨터는 %d를 선택하였습니다.\n\n",answer);

    if(a == 1){                                       //1:가위 2: 바위 3: 보
        if(answer== 1)
            printf("비겼습니다.");
        else if(answer == 2)
            printf("사용자가 졌습니다.");
        else 
            printf("사용자가 이겼습니다.");
        }
    else if( a ==2){
        if( answer ==1)
            printf("사용자가 이겼습니다.");
        else if(answer == 2)
            printf("비겼습니다.");
        else 
            printf("사용자가 졌습니다.");
    }
    else{
        if(answer == 1)
            printf("사용자가 졌습니다.");
        else if( answer == 2)
            printf("사용자가 이겼습니다.");
        else 
            printf("비겼습니다.");
    }
    return 0;
}
