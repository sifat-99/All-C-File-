#include <stdio.h>

int main()
{
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    tmp = a;
    if(a < b || a < c)
    {
        if(b < c)
        {
            tmp = c;
        }
        else
        {
            tmp = b;
        }
        printf("%d is greater\n", tmp);
    }
    else if(a > b || a > c)
    {
        if (b>c)
        {
            tmp=c;
        }
        else
        {
            tmp=b;
        }
        printf("%d is less\n", tmp);
    }
    else
    {
    }

    return 0;
}
