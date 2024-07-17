#include <stdio.h>
#define N 25

int main() {
    int arr[N], i, pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter %d integer numbers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        }

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("\nPositive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}
