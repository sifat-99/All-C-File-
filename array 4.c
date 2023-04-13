#include <stdio.h>

int main()
{

    int i, n, max, min;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ary[n];
    printf("Enter %d arrays: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    max = ary[0];
    min = ary[0];
    for (i = 1; i < n; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
        }
        if (ary[i] < min)
        {
            min = ary[i];
        }
    }
    printf("The maximum element is:%d\n", max);
    printf("The maximum element is:%d\n", min);

    return 0;
}