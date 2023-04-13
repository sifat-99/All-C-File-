
#include <stdio.h>
double diameter(double num)
{
    return (2 * num  );
}
double circumference(double num)
{
    return (2 * num*3.1416);
}
double area(double num)
{
    return (num* num*3.1416);
}


int main()
{
    int num;
    double d,c,e;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = diameter(num);
    d=circumference(num);
    e=area(num);


    printf("Cube of %d is %.2f\n", num, c); 
    printf("Diameter of %d is %.2f\n", num, d); 
    printf("Area of %d is %.2f\n", num, e); 
    
    return 0;
}

