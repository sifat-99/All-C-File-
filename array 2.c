#include <stdio.h>

int main()
{

    int i, n, max, min;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ary[n];
    printf("Enter %d arrays: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ary[i]);
    }
    printf("\nThe elements are: ");
    for(i=0; i<n; i++)
    {
        if(ary[i]<0)
        {
            printf("%d\t", ary[i]);
        }
        
    }
    return 0;
}