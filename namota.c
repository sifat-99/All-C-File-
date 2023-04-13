#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter the value of limit: ");
    scanf("%d",&n);
    for( i=1; i<=10; i++)
    {
        sum= n*i;
        printf("%d*%d = %d\n",n,i,sum);
    } 

    return 0;
    
}