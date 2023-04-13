/*#include <stdio.h>
double max(double c)
{
    if(a>b)
    {
        return (a );
    }
    else{
        return (b);
    }
    
}


int main()
{
    int a,b;
    double d,c,e;
    printf("Enter any number: ");
    scanf("%d%d", &a,&b);
    
    c = max(c);
   // d= min(d);


    printf("Cube of %d is %.2f\n", a, c); 
   // printf("Diameter of %d is %.2f\n", num, d); 
    //printf("Area of %d is %.2f\n", num, e); 
    
    return 0;
}*/


#include <stdio.h>
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

int main() 
{
    int num1, num2, maximum, minimum;
    
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2);
    minimum = min(num1, num2);
    
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);
    
    return 0;
}




