#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer Number: ");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("%d is equal %d\n",a,b);
    }
    if(b>a)
    {
        printf("%d is grater than %d\n",b,a);
    }
    if(a<b)
    {
        printf("%d is less than %d\n",a,b);
    }
    else
    {

    }
    return 0;
}
