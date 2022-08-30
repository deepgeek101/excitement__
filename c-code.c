#include <stdio.h>
int main()
{
    int a,b,p = 0;

    a = 2;
    for(b = 1; b < 10; ++b)
    {

    p = a * b;
    printf("2 x %d = %d \n", b, p);


    }
    return 0;
}
