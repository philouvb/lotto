#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include "tirage.h"

void tirage(int numbers_to_pick, int ceiling_number)
{
    int number = 0;
    int numbers[6];
    bool unique;

    srand(time(NULL));
    for(int i = 0; i < numbers_to_pick; i++ )
    {
        do{
              /* Pick a number between 1 and ceiling number */
              number = (rand() % ceiling_number) +1;
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
            printf("%d  ", numbers[i]);
    }
}
