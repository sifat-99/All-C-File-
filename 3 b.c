#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value:  ");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    {
        printf("%d is divisable bt 5 and 11\n",a);
    }
    return 0;

}