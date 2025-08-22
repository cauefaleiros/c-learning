#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int num = 0;
    int min = 1;
    int max = 100;
    int random = (rand() % (max - min + 1)) + min;
    int tries = 0;
    
    printf("*** NUMBER GUESSING GAME ***\n");
    
    while(num != random) 
    {
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &num);
        tries++;
        if (num < random) 
        {
            printf("TOO LOW\n");
        } 
        else if (num > random) 
        {
            printf("TOO HIGH\n");
        }   
    }
    printf("The answer is %d\n", random);
    printf("It tooks %d tries\n", tries);

    return 0;
}
