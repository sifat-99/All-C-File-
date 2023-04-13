#include <stdio.h>

int main()
{

    int i, n;
    int count1=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ary[n];
    printf("Enter %d arrays: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ary[i]<0)
        {
            count1++;
        }
    }
    printf("Total Negative Number: %d\n",count1);


}