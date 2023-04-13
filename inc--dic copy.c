#include<stdio.h>
int main()
{
    int b=5, a,c;
    a= ++b + b++ + b++;
    c= --b + b-- + ++b;
    printf("%d\n",a);
    printf("%d\n",c);
}