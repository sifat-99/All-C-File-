#include<stdio.h>
int main()
{
int a,i;


scanf("%d",&a);
int ary[a];

for(i=0;i<a;i++)
{
    scanf("%d",&ary[i]);
}
printf("Positive= ");
    for(i=0; i<a; i++)
    {
        if(ary[i]>0)
    {
        printf("%d ",ary[i]);
    }
    }
    printf("\tNegative= ");
    for(i=0; i<a; i++)
    {
        if(ary[i]<0)
    {
        printf("%d ",ary[i]);
    }
    }

return 0;
}