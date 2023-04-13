#include<stdio.h>
int main()
{
    float a;
    printf("Enter the result: ");
    scanf("%f",&a);
    if (a>=80 || a>=75||a>=70||a>=65||a>=60||a>=55||a>=50)
    {
        if (a>=80)
        {

            printf("A+\n");
        }

        else if(a>=75)
        {
            printf("A\n");
        }
        else if(a>=70)
        {
            printf("A-\n");
        }
        else if(a>=65)
        {
            printf("B+\n");
        }
        else if(a>=60)
        {
            printf("B-\n");
        }
        else if(a>=55)
        {
            printf("C+\n");
        }
        else if(a>=50)
        {
            printf("C-\n");
        }
    }
        else
        {
            printf("Fail\n");
        }
        return 0;
    }
