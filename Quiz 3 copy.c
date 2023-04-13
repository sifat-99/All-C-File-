#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer number: ");
    scanf("%d",&a);
    if (a%4==0 && a%5==0)
    {
        printf("%d is divisable by 4 and 5\n");
    }
    else
    {
        printf("%d is not divisable by 4 and 5");
    }

}
