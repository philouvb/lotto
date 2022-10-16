#include <stdio.h>
#include "constants.h"
#include "tirage.h"

int main(int argc, char **argv) {

    printf("---TIRAGE DU LOTTO---\n");
    tirage(LOTTO_NUMBERS_TO_PICK, LOTTO_CEILING_NUMBER);
    printf("\n");

    printf("---TIRAGE DE EUROMILLIONS---\n");
    tirage(EUROMILLIONS_NUMBERS_TO_PICK, EUROMILLIONS_CEILING_NUMBER);
    printf("------- ");
    tirage(EUROMILLIONS_STARS_TO_PICK, EUROMILLIONS_STARS_CEILING_NUMBER);
    printf("\n");

    return 0;
}
