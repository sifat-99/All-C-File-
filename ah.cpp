#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return (a < b) ? a : b;
}

int abs(int a)
{
    return (a > 0) ? -a : a;
}

int main()
{
    int ax, ay, bx, by, cx, cy, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        scanf("%d %d", &ax, &ay);
        scanf("%d %d", &bx, &by);
        scanf("%d %d", &cx, &cy);
        int bob_steps = max(abs(bx - cx), abs(by - cy));
        int carol_steps = max(abs(cx - bx), abs(cy - by));
        int max_steps = (bob_steps > carol_steps) ? bob_steps : carol_steps;
    
            printf("%d\n", max_steps);
    }

    return 0;
}
