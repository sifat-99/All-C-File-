#include <stdio.h>

int main()
{
    int a, b, i, sum = 0, max, min;
    scanf("%d%d", &a, &b);

    if (a < b)
    {
        max = b;
        min = a;
    }
    else
    {
        max = a;
        min = b;
    }
    for (i = (min + 1); i < max; ++i)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}