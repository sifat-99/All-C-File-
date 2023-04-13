#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number is an even number.\n");
    }
    else
    {
        printf("The number is an odd number.\n");
    }
    return 0;
}
