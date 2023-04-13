#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integer Number:  ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&b>c&&c>a)
    {
        if(a>b)
        {
            printf("%d is greater than %d\n",a,b);
        }
        else if(b>c)
        {
            printf("%d is greater than %d",b,c);
        }
        else

        {
            printf("%d is greater than %d",c,a);
        }
    }else if(a==b||b==c||c==a)
    {
        if(a==b)
        {
            printf("%d is equal to %d",a,b);
        }
        else if(b==c)
        {
            printf("%d is equal to %d",b,c);
        }
        else
        {
            printf("%d is equal to %d",c,a);
        }
    }else if(a<b||b<c||c<a)
    {
        if(a<b)
        {
            printf("%d is less than %d",a,b);
        }
        else if(b<c)
        {
            printf("%d is less than %d",b,c);

        }
        else
        {
            printf("%d is less than %d",c,a);
        }
    }
    else
    {

    }

    return 0;
}
