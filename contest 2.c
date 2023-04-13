#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    float i;
    int c;
    scanf("%f%f",&a,&b);
    if(a>=1 && a<=1000 && b>=1&& b<=1000 )
    {
        
        i=ceil(a/b);
        c=(int)i;
        printf("%d\n",c);
    }

    return 0;

}