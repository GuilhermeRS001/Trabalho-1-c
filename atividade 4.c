#include <stdio.h>
#include <string.h>

void Verstatus(char *status) {
    printf("Informe sua situação civil (solteiro, casado, divorciado, viúvo): ");
    scanf("%19s", status); // Limita o tamanho da string para evitar estouro de buffer
}

void respostas(char status[]) {
    int idade, filhos;
    char sexo, conjuge[50], cidade[100], nome[50];
    float salario;

    printf("Digite seu nome: ");
    scanf("%49s", nome); // Limita tamanho da string

    if (strcmp(status, "solteiro") == 0) {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
    } 
    else if (strcmp(status, "casado") == 0) {
        getchar(); // Limpa o buffer
        printf("Digite seu sexo (M/F): ");
        scanf("%c", &sexo);
        printf("Digite o nome do cônjuge: ");
        scanf("%49s", conjuge);
        
        printf("Nome: %s\n", nome);
        printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
        printf("Cônjuge: %s\n", conjuge);
    } 
    else if (strcmp(status, "divorciado") == 0) {
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &filhos);

        printf("Nome: %s\n", nome);
        printf("Filhos: %d\n", filhos);

        if (filhos > 0) {
            printf("Digite a idade do filho mais velho: ");
            scanf("%d", &idade);
            printf("Idade do filho mais velho: %d\n", idade);
        }
    } 
    else if (strcmp(status, "viuvo") == 0) {
        printf("Digite a cidade que mora: ");
        scanf("%99s", cidade);
        printf("Digite seu salário atual: ");
        scanf("%f", &salario);

        printf("Nome: %s\n", nome);
        printf("Cidade: %s\n", cidade);
        printf("Salário: %.2f\n", salario);
    } 
    else {
        printf("Erro! Situação civil inválida.\n");
    }
}

int main() {
    char status[20];
    Verstatus(status);
    respostas(status);
    return 0;
}