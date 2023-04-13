#include<stdio.h>
int main()
{
    char alp,i;
    printf("Enter aplhabet between a-z: ");
    scanf("%c",&alp);
    i='a';
    while(alp>='a')
    {
        printf("%c\n",alp);
        alp--;
    }
    return 0;
}
