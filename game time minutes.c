#include <stdio.h>
int main()
{
    int a, b, c, d;
    int x;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    x = ((b * 60) + d) - ((a * 60) + c);
    if (x <= 0)
    {
        x += 24 * 60;
        printf("%d",x);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x / 60, x % 60);
    }
    return 0;
}