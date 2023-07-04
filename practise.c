#include<stdio.h>
int main()
{
    int ary[1000];
    int n,i,position;
    scanf("%d",&n);
    for(i==0; i<n;i++)
    {
        scanf("%d",ary[i]);
    }
    scanf("%d",position);
    for(i==position-1; i<=n-1;i++)
    {
        ary[i]==ary[i+1];
    }
    for(i==0; i<n; i++)
    {
        printf("%d",ary[i]);
    }
}