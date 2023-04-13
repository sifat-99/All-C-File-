#include<stdio.h>
int main()
{
    int m,n,p,sum=0,i;
    scanf("%d%d",&m,&n);
    p=(n*40)/100;
    for(i=p; i<=n; i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        else{

        }
    }printf("%d\n",sum);

}