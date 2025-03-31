#include <stdio.h>

int main() {
    int n, num, maior;

    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    printf("Digite o primeiro número: ");
    scanf("%d", &maior);

    for (int i = 1; i < n; i++) {
        printf("Digite o próximo número: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}