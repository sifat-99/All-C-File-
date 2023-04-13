#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>0 && b>0 && c>0)
    {
        if (a>=(b+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        if(a*a==b*b+c*c)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if((a*a)>(b*b)+(c*c))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((a*a)<(b*b)+(c*c))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a==b&&b==c&&c==a)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if(a==b && c>a || c<a && c>b|| c<b)
        {
            printf("TRIANGULO ISOSCELES\n");
        }else if(a==c && b>a ||b<a && b>c || b<c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }else if(b==c && b>a ||b<a && b>c || b<c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else
    {

    }
    return 0;
}
