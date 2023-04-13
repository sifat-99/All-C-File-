#include<stdio.h>
int main()
{
    int sum,n,a=1,count=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    sum=0;
    while(a<=n)
    {
        sum+=a;
        a=a+2;
        count++;
    }
    printf("Total Odd number: %d\n",count);
     printf("%d\n",sum);
    return 0;
}
