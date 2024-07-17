// Include the standard input/output and random libraries
#include <stdio.h>
#include <stdlib.h>

// Define a constant for the maximum number of sticks that can be picked
#define MAX_PICK 4

// Define a function to get a valid user input
int get_user_pick(int sticks) {
    // Declare a variable to store the user's pick
    int user_pick;

    // Print the number of sticks left and prompt the user to enter a valid pick
    printf("There are %d match-sticks left.\n", sticks);
    printf("How many sticks do you want to pick? ");
    scanf("%d", &user_pick);

    // Use a while loop to validate the user's input
    // The input should be between 1 and 4 and not greater than the number of sticks
    while (user_pick < 1 || user_pick > MAX_PICK || user_pick > sticks) {
        printf("Invalid input. Try again.\n");
        printf("How many sticks do you want to pick? ");
        scanf("%d", &user_pick);
    }

    // Return the user's pick
    return user_pick;
}

// Define a function to calculate the computer's pick
int get_comp_pick(int sticks) {
    // Declare a variable to store the computer's pick
    int comp_pick;

    // Use a simple strategy to calculate the computer's pick
    // The computer tries to make the number of sticks a multiple of 5
    // If that is not possible, it picks a random number between 1 and 4
    if (sticks % 5 >= 1 && sticks % 5 <= MAX_PICK) {
        comp_pick = sticks % 5;
    } else {
        comp_pick = rand() % MAX_PICK + 1;

        // Make sure the computer's pick is not greater than the number of sticks
        if (comp_pick > sticks) {
            comp_pick = sticks;
        }
    }

    // Return the computer's pick
    return comp_pick;
}

// Define the main function
int main() {
    // Initialize the number of match-sticks
    int sticks = 21;

    // Print the rules of the game
    printf("There are 21 match-sticks.\n");
    printf("You can pick 1, 2, 3, or 4 match-sticks.\n");
    printf("The computer will also pick after you.\n");
    printf("Whoever is forced to pick up the last match-stick loses.\n");

    // Start the game loop
    while (1) {
        // Get the user's pick and update the number of sticks
        int user_pick = get_user_pick(sticks);
        sticks -= user_pick;

        // Check if the user lost the game
        if (sticks == 0) {
            printf("You picked the last stick. You lose!\n");
            break;
        }

        // Get the computer's pick and update the number of sticks
        int comp_pick = get_comp_pick(sticks);
        sticks -= comp_pick;

        // Print the computer's pick
        printf("The computer picked %d stick(s).\n", comp_pick);

        // Check if the computer lost the game
        if (sticks == 0) {
            printf("The computer picked the last stick. You win!\n");
            break;
        }
    }

    // Return 0 to indicate successful execution
    printf("\n\n23CS043_Debdoot\n");
    return 0;
}
