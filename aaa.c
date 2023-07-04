#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    char* p=str1;
        int len= strlen(str1);
    for(int i=len-1; i>=0;--i)
    {
        
        printf("%c",p[i]+32);
    }
}