#include<stdio.h>
int result(int a, int b);
int main()
{
    int num1, num2;
    printf("Enter num1 and num 2:  ");
    scanf("%d%d",&num1,&num2);
    int r= add(num1,num2);
    printf("Sum = %d",r);

    return 0;
}
int add(int a, int b)
{
    int s= a+b;
    return s;
}















/*int div(int m, int n);
{
    int x=a-b;
    return x;
}*/
