#include <stdio.h>
int main()
{
    int i, j,x, cnt = 0;

    // scanf("%d", &x);
    for (j = 2; j <= 50; ++j)
    {
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                cnt++;


            }
        }
         //printf("%d  ", j);
        if (cnt == 2)
    {
        printf("%d", j);
        printf("%d That is a prime number\n",j);
    }
    else
    {
        // printf("That is not a prime number\n");
    }
    }

}
