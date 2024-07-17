#include <stdio.h>

int main() {
    int yellowBalls = 10; // Initial number of yellow balls

    // i. Rajiv: ++Yellow
    yellowBalls = yellowBalls + 1;

    // ii. Preet: --Yellow
    yellowBalls = yellowBalls - 1;

    // iii. Raj: Yellow++
    int rajBalls = yellowBalls; // Store the current value
    yellowBalls = yellowBalls + 1;

    // iv. Ritul: Yellow--
    int ritulBalls = yellowBalls; // Store the current value
    yellowBalls = yellowBalls - 1;

    printf("Final number of yellow balls: %d\n", yellowBalls);
    printf("Rajiv added 1 ball.\n");
    printf("Preet removed 1 ball.\n");
    printf("Raj added 1 ball using post-increment.\n");
    printf("Ritul removed 1 ball using post-decrement.\n");

    printf("23CS043_Debdoot");

    return 0;
}
