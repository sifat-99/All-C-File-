#include <stdio.h>

int main()
{

    int i, n, max, min;
    int count1=0,count2=0;
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
        if(ary[i]%2==0)
        {
            count1++;
        }else
        {
            count2++;
        }
    }
    printf("Total Even: %d\n",count1);
    printf("Total Odd: %d\n",count2);


}