#include<stdio.h>
int main()
{
    int n1,n2,num1,num2,gcd,lcm,rem;
    scanf("%d%d",&n1,&n2);
    num1=n1;
    num2=n2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    if(rem!=0)
    {
        gcd=rem;
        printf("GCD = %d\n",gcd);
        lcm= (num1*num2)/gcd;
        printf("LCM = %d\n",lcm);
    }
    }

}