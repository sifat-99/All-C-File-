#include <stdio.h>

int main()
{

    int check = 0, sum = 0, i, j, next = 0;
    int a, b;
    while (check != 1)
    {
        scanf("%d%d", &a, &b);
        if (a <= 0 || b <= 0)
        {
            check = 1;
        }
        else if(a<b)
        {
            for (i = a; i <= b; i++)
            {
                sum += i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
            sum=0;
        }

        else if (a > b)
        {
            for (j = b; j <= a; j++)
            {
                printf("%d ", j);
                    next += j;

            }printf("Sum=%d\n", next);
            next=0;
        }
        
    }
    return 0;
}

