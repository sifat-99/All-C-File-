#include <stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np;
    int max;
    int max1, max2, max3;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    max1 = (k * l) / (n * nl);
    max2 = (c * d) / n;
    max3 = p / (n * np);

    max = (max1 < max2) ? max1 : max2;
    max = (max < max3) ? max : max3;

    printf("%d\n", max);

    return 0;
}
