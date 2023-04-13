#include<stdio.h>
int main(){
    int a, b, i;
    scanf("%d%d", &a,&b);
    if (a > b) {
        int total = 0;
        for (i = b; i <= a; i++) {
            if (i % 13 != 0) {
                total += i;
            }
        }
        printf("%d\n", total);
    }else if(a < b){
        int total2 = 0;
        for (i = a; i <= b; i++) {
            if (i % 13 != 0) {
                total2 +=i;
            }
        }

        printf("%d\n", total2);
    }
   return 0;
}
