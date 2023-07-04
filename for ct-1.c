#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==0|| a%5||a%10==0)
    {
        if(a%4==0&&a%5==0&&a%10==0)
        {
            printf("%d is divisable by 4 and 5\n",a);
        }else if(a%10==0)
        {
            printf("%d is divisable by 10\n",a);
        }

    }else
    {
        printf("%d is not divisable by 4 and 5 or 10\n",a);
    }
    return 0;
}