#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;
    printf("Enter the value of a=");
    scanf("%lf",&a);
    printf("Enter the value of b=");
    scanf("%lf",&b);
    printf("Enter the value of c=");
    scanf("%lf",&c);
    //printf("Enter the value of d=");
    //scanf("%d",&d);

    d=sqrt((b*b)-4*a*c);

    x1=((-b+d)/2*a);
    x2=((-b-d)/2*a);
    printf("x1=%.3lf\n",x1);
    printf("x2=%.3lf",x2);

return 0;

}