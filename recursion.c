#include<stdio.h>
#include<math.h>

int main()
{
    int c[10]={1,2,3,4,5,6,7,8,9,10};
    int b=0;
    for(int a=0; a<10; a=a+2)
    {
        b=b+c[a];
    }
    printf("%d\n",b);
}
