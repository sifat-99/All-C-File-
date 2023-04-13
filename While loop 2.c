#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any number: ");
    scanf("%d",&n);
    i=100;
    while(i>=n)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
