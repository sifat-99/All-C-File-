#include <stdio.h> //Program 1
int main()
{
    int b, a, a1, a2;
    scanf("%d", &b);
    a1 = (++b + b++ )+ b++;
    a2 = (--b + b-- )+ ++b;
    printf("b= %d\n", a1);
    printf("b= %d\n", a2);
    return 0;
    
}