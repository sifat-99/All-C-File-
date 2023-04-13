#include<stdio.h>
int main()
{
    double a,x1,x2;
    int x;
    scanf("%lf",&a);
    if(a>=0)
    {
        if(a>=0 && a<=400)
        {
            x=15;
            x1= a*0.15;
            x2= a+x1;
            printf("Novo salario: %0.2lf\n",x2);
            printf("Reajuste ganho: %0.2lf\n",x1);
            printf("Em percentual: 15 %%\n");
        }else if(a<=800.00)
        {
            x=12;
            x1= a*0.12;
            x2= a+x1;
            printf("Novo salario: %0.2lf\n",x2);
            printf("Reajuste ganho: %0.2lf\n",x1);
            printf("Em percentual: 12 %%\n");
        }else if(a<=1200.00)
        {
            x=10;
            x1= a*0.10;
            x2= a+x1;
            printf("Novo salario: %0.2lf\n",x2);
            printf("Reajuste ganho: %0.2lf\n",x1);
            printf("Em percentual: 10 %%\n");
        }else if(a<=2000.00)
        {
            x=7;
            x1= a*0.07;
            x2= a+x1;
            printf("Novo salario: %0.2lf\n",x2);
            printf("Reajuste ganho: %0.2lf\n",x1);
            printf("Em percentual: 7 %%\n");
        }else if(a>=2000.01)
        {
            x=4;
            x1= a*0.04;
            x2= a+x1;
            printf("Novo salario: %0.2lf\n",x2);
            printf("Reajuste ganho: %0.2lf\n",x1);
            printf("Em percentual: 4 %%\n");
        }

    }
}
