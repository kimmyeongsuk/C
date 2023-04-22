#include <stdio.h>

int main()
{
    int n,a,b;

    scanf("%d", &n);
   
    for( int i = 0; i <n; i++)
    {
        scanf("%d %d\n", &a,&b);
        
        printf("Case #%d: %d + %d = %d\n", n, a, b,a+b);
    }
    return 0;
}