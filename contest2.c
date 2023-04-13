#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int ways = 0;
        for(int a = 1; a <= n/2; a++) {
            
            int b = n - a;
            if(a > b) {
                ways++;
            }
        }
        printf("%d\n", ways);
    }
    return 0;
}
