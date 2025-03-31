#include <stdio.h>

void Verstatus(char *status){
    
    printf("informe sua situacao civil (solteiro,casado,divorciado e viuvo): ");
    scanf("%s",status);
}
void respostas(char status[]){
    int idade,filhos;
    char sexo,conjuge[50],cidade[100],nome[50];
    float salario;
        printf("digite se nome: ");
        scanf("%s",nome);
    if (strcmp(status, "solteiro") == 0) {
        printf("digite sua idade: ");
        scanf("%d",&idade);
        printf("nome: %s\n",nome);
        printf("idade: %d\n",idade);
    } else if (strcmp(status, "casado")== 0){
        printf("digite seu sexo (M/F): ");
        scanf("%s",&sexo);
        getchar();
        printf("digite o nome do conjuge: ");
        scanf("%s",conjuge);
        printf("nome: %s\n",nome);
        if (sexo == "m"|| sexo =="M"){
            printf("Sexo:masculino\n");
        } else {
            printf("Sexo:feminino\n");
        }
        printf("conjuge: %s\n",conjuge);
    } else if (strcmp(status, "divorciado")== 0){
        printf("digite a contidade de filhos: ");
        scanf("%d",filhos);
        if (filhos <=0){
            printf("nome: %s\n",nome);
            printf("filhos: %d\n",filhos);
        } else {
            printf("digite a idade do mais velho:" );
            scanf("%d",idade);
            printf("nome: %s\n",nome);
            printf("filhos: %d\n",filhos);
            printf("idade filho: %d\n",idade);
        }
    } else if (strcmp(status,"viuvo")==0){
        printf("digite a cidade que mora: ");
        scanf("%s",cidade);
        printf("digite seu salario atual: ");
        scanf("%f",&salario);
        printf("nome: %s\n",nome);
        printf("cidade: %s\n",cidade);
        printf("salario: %d\n",salario);
    } else {
        printf("erro!!!");
    }
}

int main(){
    char status[20];
    Verstatus(status);
    respostas(status);
    return 0;
}