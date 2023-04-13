#include<stdio.h>
int addition(int a, int b);

int main()
{
    int num1, num2;
    printf("Enter num1 and num 2:  ");
    scanf("%d%d",&num1,&num2);
    int result= addition(num1,num2);
    printf("%d\n",result);

    return 0;
}
int addition(int a, int b)
{
    int s= (a+b);
    return s;
}
