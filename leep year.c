#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year: ");
    scanf("%d",&a);
    if (a%4==0 && a%100!=0)
    {
        printf("%d is a leep year",a);
    }else if(a%400==0)
    {
        printf("this is a leep year");
    } else
    {
        printf("%d is not a leep year",a);
    }

    return 0;
}
