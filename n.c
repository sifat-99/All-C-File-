#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while (testCase--)
    {
        long long int a, b, c, d, Sol = 0;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        int y = (d - b);
        Sol += y;
        a += y;
        if ((c - a) > 0 || (y < 0))
        {
            printf("-1\n");
            continue;
        }
        Sol += (a - c);

        printf("%lld\n", Sol);
    }

    return 0;
}