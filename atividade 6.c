int main() {
    float numeros[10], soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    printf("\nMetade de cada número:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %.2f -> Metade: %.2f\n", numeros[i], numeros[i] / 2);
    }

    float media = soma / 10;
    printf("\nMédia dos números: %.2f\n", media);

    return 0;
}