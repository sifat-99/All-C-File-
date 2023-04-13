#include <stdio.h>
int main()
{
    int m,n,c,i,e,d=0;
    printf("Enter the value:  ");
    scanf("%d%d",&m,&n);
    c=((n*40)/100);
                                    //printf("%d",c);
    if(m>=c)
    {
    for( i=m;i<n;i++)
    {
        if(i%2==0)
        {
            //printf("%d",i);
            d+=i;
        } //printf("%d",d);

        

    } printf("%d\n",d);
    }
    return 0;

}