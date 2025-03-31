#include <stdio.h>

int main() {
    char nome[50], sexo;
    int idade;

    for (int i = 0; i < 20; i++) {
        printf("Digite o nome: ");
        scanf("%s", nome);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);  

        if ((sexo == 'M' || sexo == 'm') && idade > 21) {
            printf("Nome: %s\n", nome);
        }
    }

    return 0;
}