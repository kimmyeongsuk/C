#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((int)time(NULL));
    int solution, digit1, digit2, answer;
    solution = rand() % 100;

    printf("복권 번호를 입력하시오(0에서 99사이):");
    scanf("%d", &answer);
    printf("당첨번호는 %d입니다.", solution);
    
    digit1 = answer / 10; // 10의 자리
    digit2 = answer % 10; // 1의 자리
  
    if (answer == solution)
    {
        printf("상금은 100만원입니다.");
    }
    else if (answer / 10 == digit1 || answer % 10 == digit2)
        printf("상금은 50만원입니다.");
    else
    {
        printf("상금은 없습니다.");
    }
    return 0;
}