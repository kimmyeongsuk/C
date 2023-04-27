#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int answer = rand()%100;
    int guess;
    int tries = 0;

    do{
        printf("정답을 추측하시오:");
        scanf("%d", &guess);
        tries++;
        if( answer < guess)
        {
            printf("LOW\n");
        }
        if( answer > guess)
        {
            printf("HIGH\n");
        }
    }while (guess != answer);

    printf("축하합니다.시도횟수=%d", tries);
    return 0;
}
