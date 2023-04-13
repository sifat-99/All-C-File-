#include <stdio.h>
int main()
{
    int a,b,c,i,d=0;
    printf("Enter the value:  ");
    scanf("%d%d",&a,&b);
    c=((b*40)/100);
    //printf("%d",c);
    
    for( i=c;i<b;i++)
    {
        if(i%2==0)
        {
            //printf("%d",i);
            d+=i;
        } //printf("%d",i);

        

    } printf("%d\n",d);
    return 0;

}