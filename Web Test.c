#include<stdio.h>
int main()
{
    double a,b,c,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    TRIANGULO= (.5*a*c);
    CIRCULO= 3.14159*c*c;
    TRAPEZIO= 0.5*(a+b)*c;
    QUADRADO=b*b;
    RETANGULO=a*b;
    printf("TRIANGULO: %0.3lf\n",TRIANGULO);
    printf("CIRCULO: %0.3lf\n",CIRCULO);
    printf("TRAPEZIO: %0.3lf\n",TRAPEZIO);
    printf("QUADRADO: %0.3lf\n",QUADRADO);
    printf("RETANGULO: %0.3lf\n",RETANGULO);

    return 0;
}
