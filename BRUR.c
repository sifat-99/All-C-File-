// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     if (num & 1) {
//         printf("%d is odd.\n", num);
//     } else {
//         printf("%d is even.\n", num);
//     }

//     return 0;
// }

#include <stdio.h>

int sumDigitsAtEvenPositions(int num) {
    char str[20];
    sprintf(str, "%d\n", num);

    int sum = 0;
    for (int i = 1; str[i] != '\0'; i += 2) {
        sum += str[i] - '0';
    }
    return sum;
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int sum = sumDigitsAtEvenPositions(num);
    printf("Sum of digits at even positions: %d\n", sum);
    return 0;
}

