#include<stdio.h>
int main()
{
    int m,n,o,x,y,z,max,min,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        scanf("%d%d %d",&m,&z,&y);
        max=m+z;
        if(max==y)
        {
            printf("+\n");
        }
        else
        {
            printf("-\n");
        }
    }

    return 0;
}
