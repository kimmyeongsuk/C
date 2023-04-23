#include <stdio.h>

int main()
{
    int  x,y,z;

    printf("정수 3개를 입력하시오:");
    scanf("%d %d %d",&x,&y,&z);

    printf("제일 작은 정수는");
    if( x < y ){
        if( x < z)
            printf("%d",x);
        else
            printf("%d",z);
    }
    else{
        if( y < z)
            printf("%d",y);
        else
            printf("%d",z);
    }    
    printf("입니다.");
    return 0;
}