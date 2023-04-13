#include <stdio.h>

int main()
{

    int i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ary[n];
    int gry[n];
    printf("Enter %d arrays: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (i = 0; i < n; i++)
    {
        gry[i] = ary[i];
    }
    printf("Source Arrays are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",ary[i]);
    }
    printf("\nAnother array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",gry[i]);
    }
}