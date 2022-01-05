#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // with only rand() it gives same number to fix that issue i used this function
    int number = (rand() % 100)+1, count = 1, guess;

    printf("Number guessing game!\n");
    
    do {
        printf("Guess the number between %d to %d :", 1, 100);
        scanf("%d", &guess);
        if ( guess > 100 || guess <= 0) {
            printf("Guess only between %d to %d.\n", 1, 100);
        }
        else if ( guess == number ) {
            printf("\n\nYou win, guessed correct number %d!\n", guess);
            printf("\nYou gussed in %d times.", count);
            break;
        }

        else if ( guess > number ) {
            printf("Too high, you guessed %d.\n", guess);
        }

        else if ( guess < number ) {
            printf("Too low, you guessed %d.\n", guess);
        }
        else {
            printf("Please choose valid number.\n");
        }
        count += 1;
    } while ( 1 );
    return 0;
}