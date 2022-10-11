#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    const int NUMBERS_TO_PICK = 6;
    const int CEILING_NUMBER = 45;
    int number = 0;
    int numbers[6];
    bool unique;

    srand(time(NULL));

    printf("---Tirrage du Lotto---\n");

    for(int i = 0; i < NUMBERS_TO_PICK; i++ )
    {
        do{
              /* Pick a number between 1 and CEILING_NUMBER */
              number = (rand() % CEILING_NUMBER) +1;
              unique = true;
              for(int j = 0; j < i; j++)
              {
                  if(numbers[j] == number)
                  {
                      unique = false;
                  }
              }
            } while (!unique);
            numbers[i] = number;
            printf("Nombre %d : %d\n", i+1, numbers[i]);
    }
    return 0;
}
