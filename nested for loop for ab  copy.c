#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of limit: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d * %d \n",i,j);
        }printf("\n");
    }
}
