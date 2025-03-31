#include <stdio.h>

int main() {
    int quantidade, totalCompra, valorPago, troco;
    int c20, c10, c5, c2, m1;

    printf("Digite a quantidade de chocolates a ser comprada: ");
    scanf("%d", &quantidade);

    totalCompra = quantidade * 5;

    printf("O total da compra é R$ %d\n", totalCompra);

    printf("Insira o valor pago pelo cliente: R$ ");
    scanf("%d", &valorPago);

    if (valorPago < totalCompra) {
        printf("Valor insuficiente para a compra!\n");
        return 0;
    }

    troco = valorPago - totalCompra;
    printf("O troco é: R$ %d\n", troco);

    c20 = troco / 20;
    troco %= 20;

    c10 = troco / 10;
    troco %= 10;

    c5 = troco / 5;
    troco %= 5;

    c2 = troco / 2;
    troco %= 2;

    m1 = troco;

    printf("\nTroco a ser dado:\n");

    if (c20 > 0) printf("%d cédula(s) de R$ 20\n", c20);
    if (c10 > 0) printf("%d cédula(s) de R$ 10\n", c10);
    if (c5 > 0) printf("%d cédula(s) de R$ 5\n", c5);
    if (c2 > 0) printf("%d cédula(s) de R$ 2\n", c2);
    if (m1 > 0) printf("%d moeda(s) de R$ 1\n", m1);

    return 0;
}