//Write a code for summation substraction multiplication division, give some input and make output.





#include<stdio.h>
int main()
{
    int a=20,b=10,summation,substraction,multiplication,division;
    summation=a+b;
    substraction=a-b;
    multiplication=a*b;
    division=a/b;
    printf("        The value of a=%d\n",a);
    printf("        The value of b=%d\n",b);
    printf("        summation=%d+%d=%d\n",a,b,summation);
    printf("        substraction=%d-%d=%d\n",a,b,substraction);
    printf("        multiplication=%d*%d=%d\n",a,b,multiplication);
    printf("        division=%d/%d=%d\n",a,b,division);

    return 0;

}



