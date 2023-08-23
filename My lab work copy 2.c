#include <stdio.h>
int main()
{

    int cout = 0, i;

    int s[4];
    for (i = 0; i < 5; i++)

    {
        scanf("%d", &s[i]);

        if (s[i] % 2 == 0)
        {

            cout++;
        }
    }
    printf("%d valores pares\n", cout);
    return 0;
}