#include <stdio.h>
int main()
{
    double a, b, c, x;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a<=b+c || b<=a+c || c<=a+b)
    {
        x = a + b + c;
        printf("Perimetro = %0.1lf\n", x);
    }
    else
    {
        x = ((a+b)/2)*c;
        printf("Area = %0.1lf\n", x);
    }

    return 0;
}
