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
printf("Even= ");
    for(i=0; i<a; i++)
    {
        if(ary[i]%2==0)
    {
        printf("%d ",ary[i]);
    }
    }
    printf("\tOdd=");
    for(i=0; i<a; i++)
    {
        if(ary[i]%2!=0)
    {
        printf("%d ",ary[i]);
    }
    }

return 0;
}