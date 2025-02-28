#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed;
    do
    {
        printf("Guess the number!: ");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("Guess lower!\n");
        }
        else if (guessed < random_number)
        {
            printf("Guess higher!\n");
        }
        else
        {
            printf("Congratulations!\n");
        }
        number_of_guesses++;

    } while (random_number != guessed);
    printf("You guessed the number in %d guesses\n", number_of_guesses);

    return 0;
}
