#include <stdio.h>

int main() {
    int anos = 0;
    double populacaoA = 90000, populacaoB = 50000;

    while (populacaoB <= populacaoA) {
        populacaoA += populacaoA * 0.009;
        populacaoB += populacaoB * 0.015;
        anos++;
    }

    printf("Serão necessários %d anos para que a cidade B ultrapasse a cidade A.\n", anos);

    return 0;
}