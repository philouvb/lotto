#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include "tirage.h"

#define LENGTH(a) sizeof(a) / sizeof(a[0])

void tirage(int numbers_to_pick, int ceiling_number)
{
    int number = 0;
    int numbers[numbers_to_pick];
    bool unique;

    srand(time(NULL));
    for(unsigned int i = 0; i <  LENGTH(numbers); i++ )
    {
        do{
              /* Pick a number between 1 and ceiling number */
              number = (rand() % ceiling_number) +1;
              unique = true;
              for(unsigned int j = 0; j < i; j++)
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
