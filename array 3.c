#include <stdio.h>

int main()
{

    int i, n,sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ary[n];
    printf("Enter %d arrays: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=0; i<n; i++)
    {
        sum+=ary[i];
        
    }
    printf("Sum of array are: %d",sum);
    return 0;
}