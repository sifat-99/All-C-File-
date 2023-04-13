#include<stdio.h>
int main()
{

    printf("Enter three numbers:");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b||b>c||c>a)
    {
        if(a>b)
        {
            printf("%d is greater than %d\n",a,b);
        }
        else if (b>c)
        {
            printf("%d is greater than %d\n",b,c);
        }
        else
            printf("%d is greater than %d\n",c,a);

    }
    if(a==b||b==c||c==a)
    {
        if(a==b)
        {
            printf("%d is equal to %d\n",a,b);
        }
        else if(b==c)
        {
            printf("%d is equal to %d\n",b,c);
        }
        else
        {
            printf("%d is equal to %d\n",c,a);

        }
    }
    if(a<b||b<c||c<a)
    {
        if(a<b)
        {
            printf("%d is less than %d\n",a,b);
        }
        else if (b<c)
        {

            printf("%d is less than %d\n",b,c);
        }
        else
        {
            printf("%d is less than %d\n",c,a);
        }
    }
    else
    {

    }

    return 0;
}
