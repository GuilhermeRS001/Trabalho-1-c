#include <stdio.h>

int main() {
    int itemCount = 0, totalItems = 0;
    float valorUnitario, totalCompra = 0, desconto, totalComDesconto;
    int pagamento, totalVendas = 0;

    do {
        printf("Digite o valor unitário do produto (ou um valor menor ou igual a 0 para encerrar): R$ ");
        scanf("%f", &valorUnitario);

        if (valorUnitario > 0) {
            itemCount++;
            totalCompra += valorUnitario;
            totalVendas += valorUnitario;
        }
    } while (valorUnitario > 0);

    if (totalCompra > 0) {
        printf("\nQuantidade de itens comprados: %d\n", itemCount);
        printf("Valor total da compra: R$ %.2f\n", totalCompra);

        printf("\nEscolha a forma de pagamento:\n");
        printf("1. Dinheiro\n2. Cartão Débito\n3. Cartão Crédito\n");
        scanf("%d", &pagamento);

        switch (pagamento) {
            case 1: 
                desconto = totalCompra * 0.10;
                totalComDesconto = totalCompra - desconto;
                printf("\nOpção escolhida: Dinheiro\n");
                printf("Percentual de desconto: 10%%\n");
                printf("Desconto obtido: R$ %.2f\n", desconto);
                printf("Total a pagar: R$ %.2f\n", totalComDesconto);
                break;

            case 2: 
                desconto = totalCompra * 0.05;
                totalComDesconto = totalCompra - desconto;
                printf("\nOpção escolhida: Cartão Débito\n");
                printf("Percentual de desconto: 5%%\n");
                printf("Desconto obtido: R$ %.2f\n", desconto);
                printf("Total a pagar: R$ %.2f\n", totalComDesconto);
                break;

            case 3:
                printf("\nOpção escolhida: Cartão Crédito\n");
                printf("Total a pagar: R$ %.2f\n", totalCompra);
                break;

            default:
                printf("Opção inválida.\n");
        }
    } else {
        printf("\nNenhuma compra realizada.\n");
    }

    printf("\nTotal de itens vendidos no dia: %d\n", itemCount);
    printf("Total das vendas no dia: R$ %.2f\n", totalVendas);

    return 0;
}