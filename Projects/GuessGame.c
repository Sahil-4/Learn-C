// GuessGame.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Creating a Funcction to generate random number between 0 to 100

int randomIntGenerator()
{
    srand(time(0));
    return rand() % 100 + 0;
}

int main()
{
    int RandomNumber, GuessedNumber, Counts, Points;
    Counts = 1;
    Points = 100;
    RandomNumber = randomIntGenerator();
    printf("%d\n", RandomNumber); // for testing
    do
    {
        printf("Enter Your Guessed Number : \n");
        scanf("%d", &GuessedNumber);
        if (RandomNumber == GuessedNumber)
        {
            printf("You win in %d Rounds\nScore : %d\n", Counts, Points);
        }
        else
        {
            if (RandomNumber > GuessedNumber)
            {
                printf("Too Small Number\n");
            }
            else
            {
                printf("Too Big Number\n");
            }
        }
    } while (GuessedNumber != RandomNumber);
    return 0;
}
