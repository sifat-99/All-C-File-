
#include <stdio.h>

int main()

{
    int i, n, c = 0;  
    printf("Enter a number to see if its a prime number or not: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        printf("Prime number\n");
    }
    else{
        printf("Not a prime number\n");
    }
    return 0;
}
