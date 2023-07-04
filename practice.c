#include<stdio.h>
int main()
{
    int ary[1000];
    int n,i,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    scanf("%d",&pos);
    for(i=pos-1; i<n-1;i++)
    {
        ary[i]=ary[i+1];
        
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d",ary[i]);
    }
}