#include<stdio.h>
int main()
{
    float age;
    printf(" Plese! Enter your age: ");
    scanf("%f",&age);
    if (age>=18)
    {
        printf("\n\n\n\tEligible For Vote\n\n\n\n");
    }
    else
    {
        printf("\n\n\n\tNot Eligible For Vote\n\n\n\n");
    }
    return 0;
}
