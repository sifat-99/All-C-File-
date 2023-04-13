#include <stdio.h>
int main()
{

    int x, y, i, sum = 0;
    printf("Please enter the value of x,y:");
    scanf("%d%d", &x, &y);

    if (x < y)
    {
        for (i = x; i < y; i++)
        {

            if (i % 2 != 0)
            {
                sum += i;
            }
        }
    }
    else if (x > y)
    {
        for (i = y; i < x; i++)
        {

            if (i % 2 != 0)
            {
                sum += i;
            }
        }
    }
    else
    {
    }

    printf("%d", sum);

    return 0;
}