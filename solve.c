#include <stdio.h>
int main()
{
    int a = 10, b = 20, tmp;

    tmp = a;
    a = b;
    b = tmp;

    printf("a= %d\n", a);
    printf("b= %d\n", b);
    return 0;
}