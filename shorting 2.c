#include <stdio.h>
int main()
{
    int a, b, c, tmp,m,n,o;
    scanf("%d%d%d", &a, &b, &c);
    m=a;
    n=b;
    o=c;
    if (a > b)
    {
        tmp = b;
        b = a;
        a = tmp;
    }
    if (a > c)
    {
        tmp = c;
        c = a;
        a = tmp;
    }
    if (b > c)
    {
        tmp = c;
        c = b;
        b = tmp;
    }
    
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",m,n,o);

}