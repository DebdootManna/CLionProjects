#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    do {
        printf("1. Prime or not (Use for Loop)\n");
        printf("2. Armstrong number or not (Use while loop)\n");
        printf("3. Perfect number or not (Use do..while loop)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                int num;
                scanf("%d", &num);
                int isPrime = 1;
                for (int i = 2; i <= num / 2; ++i) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime)
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;
            case 2:
                printf("Enter a number: ");
                int n;
                scanf("%d", &n);
                int temp = n, r, sum = 0;
                while (temp > 0) {
                    r = temp % 10;
                    sum += r * r * r;
                    temp /= 10;
                }
                if (sum == n)
                    printf("%d is an Armstrong number.\n", n);
                else
                    printf("%d is not an Armstrong number.\n", n);
                break;
            case 3:
                printf("Enter a number: ");
                int x;
                scanf("%d", &x);
                int sum1 = 0, i1 = 1;
                do {
                    if (x % i1 == 0)
                        sum1 += i1;
                    i1++;
                } while (i1 < x);
                if (sum1 == x)
                    printf("%d is a perfect number.\n", x);
                else
                    printf("%d is not a perfect number.\n", x);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
}
