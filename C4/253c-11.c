#include <stdio.h>

int main()
{
    char A;
    
    printf("문자를 입력하시오:");
    A = getchar();
    
    switch (A)
    {
    case 'R':
    case 'r':
        printf("Rectangle");
        break;
    case 'T':
    case 't':
        printf("Triangle");
        break;
    case 'C':
    case 'c':
        printf("Circle");
        break;
    default:
        printf("Unknown");
        break;
    }
    return 0;
}