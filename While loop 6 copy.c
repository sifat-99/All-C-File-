#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    i=1;
    while(i<=100)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}
