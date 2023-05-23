#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int GuessingGamelol()
{
    srand(time(NULL));
    int Guessing_Number = rand()%10 + 1;
    int Guessed_Number;
    bool istrue = false;
    int lives = 3;
    do
    {
        printf("Sch\x84tze die Nummer von 0 bis 10\n");
        printf("Leben \x9a");
        printf("brich: %d \n", lives);
        scanf("%d", &Guessed_Number);
        if(Guessed_Number == Guessing_Number){
            istrue = true;
        }
        else{
            printf("Falsch Versuchs Nochmal\n");
            lives--;

        }
    }

    while(istrue == false && lives >= 0);
    if(istrue == true){
    printf("Super! Du liegst richtig.\n");
    }
    else{
        printf("Game Over! Die Nummer war %d.", Guessing_Number);
    }
    return 0;
}
