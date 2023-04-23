#include <stdio.h>

int main()
{
    double time;
    double light = 300000;
    double distance = 149600000;

    time = distance / light;

    printf("빛의 속도는 %lfkm/s\n",light);
    printf("태양과 지구와의 거리 %lfkm\n",distance);
    printf("도달 시간은 %lf초",time);

    return 0;
}