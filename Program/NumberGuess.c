#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int target, guess, attempts = 0;

    srand(time(NULL));    // Seed random number generator
    target = rand() % 100 + 1; // 1 to 100

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100:\n");

    while (1)
    {
        printf("> ");
        if (scanf("%d", &guess) != 1)
        {
            printf("Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear invalid input

            continue;
        }
        attempts++;

        if (guess < target)
            printf("Too low! Try again.\n");
        else if (guess > target)
            printf("Too high! Try again.\n");
        else
        {
            printf("🎉 Correct! You found it in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}