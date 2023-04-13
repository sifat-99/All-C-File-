#include<stdio.h>
int main()
{
    char alp,i;
    printf("Enter aplhabet between a-z: ");
    scanf("%c",&alp);
    i='z';
    while(alp<='z')
    {
        printf("%c\n",alp);
        alp++;
    }
    return 0;
}
