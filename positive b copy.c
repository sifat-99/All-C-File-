#include <stdio.h>

int main()
{

    int check = 0;
    int a, b;
    while (check != 1)
    {
        scanf("%d%d", &a, &b);
        if (a==0 || b==0)
        {
            check = 1;
        }
        else if (a>0 &&  b>0)
        {
            printf("primeiro\n");
        }
        else if (a>0 &&  b<0)
        {
            printf("quarto\n");
        }else if (a<0 &&  b>0)
        {
            printf("segundo\n");
        }else if (a<0 &&  b<0)
        {
            printf("terceiro\n");
        }
    }
    return 0;
}