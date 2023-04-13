#include<stdio.h>
int main()
{
    int n,j,k,l,sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&j,&k);
        if(j<k)
        {
            for(l=j+1; l<k; l++)
            {
                if(l%2!=0)
                {
                    sum+=l;
                }
                
            }printf("%d\n",sum);
            sum=0;
        }
        else{
             for(l=k+1; l<j; l++)
            {
                if(l%2!=0)
                {
                    sum+=l;
                }
                
            }printf("%d\n",sum);
            sum=0;
        }
        
    }
    return 0;
}