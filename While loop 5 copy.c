#include<stdio.h>
int main()
{
    int a,s;
    scanf("%d",&a);
    if(a>5 && a<2000)
    {
    for(int i=2; i<=a;i++)
    {
        if(i%2==0)
        {
            s=i*i;
            printf("%d^2 = %d\n",i,s);
        }
    }
    }
    return 0;
}