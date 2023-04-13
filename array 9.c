#include <stdio.h>

int main()
{

    int i, n,num,pos;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ary[n];
    printf("Enter %d arrays: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
    if(pos > n+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", n);
    }
    else
    {
        for(i=n; i>=pos; i--)
        {
            ary[i] = ary[i-1];
        }
        ary[pos-1] = num;
        n++;
        printf("Array elements after insertion : ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", ary[i]);
        }
    }
}