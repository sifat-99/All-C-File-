#include <stdio.h>
#include <limits.h>

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
    max = min = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (ary[i] > max)
        {
            min = max;
            max = ary[i];
        }
        if (ary[i] > max && ary[i] < min)
        {
            min = ary[i];
        }
    }
    printf("First large: %d\n", max);
    printf("Second learge: %d\n", min);

    return 0;
}