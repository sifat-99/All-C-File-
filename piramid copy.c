#include<stdio.h>
int main()
{
    int n,max=0,min=0;
    int ary[3];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        
        for(int j=0; j<ary[2]; j++)
        {
            int o;
            scanf("%d",ary[j]);
            scanf("%d",o);
            max+=ary[j];
            min-=ary[j];
            if(max==o || min==o)
            {
                    printf("+\n");
            }
            else
            {
                printf("-\n");
            }

        }
    }
}