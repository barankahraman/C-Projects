#include <stdio.h>

int main() {
    long long int num = 600851475143;
    long long int max = 0;

    while (num % 2 == 0) {
        max = 2;
        num /= 2;
    }

    for (long long int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            max = i;
            num /= i;
        }
    }

    if (num > 2) {
        max = num;
    }

    printf("%lld", max);
    return 0;
}