#include <stdio.h>
#include <string.h>

unsigned long long powerMod(unsigned long long base, unsigned long long exponent, unsigned long long modulus) {
    unsigned long long result = 1;
    base = base % modulus;
    
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        exponent /= 2;
    }
    
    return result;
}

int main() {
    unsigned long long n, p, m;
    char s[100];
    
    scanf("%llu", &n);
    scanf("%s", s);
    
    p = strlen(s);
    m = 1234;
    
    unsigned long long sum = 0;
    for (int i = 1; i <= p; i++) {
        sum += powerMod(i, n, m);
        sum %= m;
    }
    
    unsigned long long y = (sum + powerMod(p, n, m)) % m;
    printf("The value of y is: %llu\n", y);
    
    return 0;
}
