#include<stdio.h>
int main()
{
    int t, n,cnt=0;
    scanf("%d %d",&t,&n);
    for(int i=0; i<t; i++)
    {
        int ary[4];
        for (int j=i; j<n; j++)
        {
            scanf("%d %d %d %d",&ary[0],&ary[1],&ary[2],&ary[3]);
            if(ary[1]+ary[2]+ary[2]>=ary[0])
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            printf("PASS\n");
            cnt=0;
        }else
        {
            printf("FAIL\n");
            cnt=0;
        }
    }
}
