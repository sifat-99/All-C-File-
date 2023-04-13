#include <stdio.h>
int main()
{
    char c;
    int n;

    scanf("%c", &c);

    n = (int)c;

    if (n >= 65 && n <= 91)
    {
        printf("'%c' is uppercase alphabet.\n", c);
    }
    else if (n >= 97 && n <= 123)
    {
        printf("'%c' is lowercase alphabet.\n", c);
    }
    else
    {
        printf("'%c' is a digit.\n", c);
    }
    return 0;
}