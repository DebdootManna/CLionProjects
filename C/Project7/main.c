#include <stdio.h>

int main() {
    int yellowBalls = 10; // Initial Yellow balls
    int pinkBalls = 20;   // Initial Pink balls

    // Instructions
    yellowBalls = yellowBalls + 1;   // ++Yellow
    yellowBalls = yellowBalls + 1;   // Yellow++ (post-increment, takes effect from next step)
    yellowBalls = yellowBalls - 1;   // --Yellow

    pinkBalls = pinkBalls + 1;       // ++Pink
    pinkBalls = pinkBalls - 1;       // --Pink
    pinkBalls = pinkBalls - 1;       // --Pink

    // Calculate and display the counts
    printf("Final count of Yellow balls: %d\n", yellowBalls);
    printf("Final count of Pink balls: %d\n", pinkBalls);

    printf("23CS043_Debdoot");

    return 0;
}
