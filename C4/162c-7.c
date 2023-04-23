#include <stdio.h>

int main()
{
    double kg, ms;

    printf("질량(kg):");
    scanf("%lf", &kg);
    printf("속도(m/s)");
    scanf("%lf",&ms);
    printf("운동에너지(J):%.6lf",0.5*kg*ms*ms);

    return 0;
}