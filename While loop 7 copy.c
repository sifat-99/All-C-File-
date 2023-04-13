#include<stdio.h>
int main()
{
    int sum,n,a=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    sum=0;
    while(a<=n)
    {
        sum+=a;
        a++;
    }
     printf("%d\n",sum);
    return 0;
}
