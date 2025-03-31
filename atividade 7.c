#include <stdio.h>

int main() {
    float inicio, fim;

    printf("Digite o valor inicial em polegadas: ");
    scanf("%f", &inicio);

    printf("Digite o valor final em polegadas: ");
    scanf("%f", &fim);

    printf("\nTabela de Conversão:\n");
    printf("Polegadas   Centímetros\n");

    for (float i = inicio; i <= fim; i++) {
        printf("%.2f         %.2f\n", i, i * 2.54);
    }

    return 0;
}