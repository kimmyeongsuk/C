#include <stdio.h>

int main()
{
    int i = 0x10;
    for( ; i ; i>>= 1)
        printf("Hello\n");
}