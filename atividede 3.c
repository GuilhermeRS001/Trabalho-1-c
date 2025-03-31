#include <stdio.h>

void verregiao(int *regiao){
    printf("1 - Norte\n");
    printf("2 - nordeste\n");
    printf("3 - centro oeste\n");
    printf("4 - sudeste\n");
    printf("5 - sul \n");
    printf("digite o numero da sua regiao: ");
    scanf("%d", regiao);
    }
void verquantide(int *quantide){
    printf("digite a quantidade que vc quer comprar: ");
    scanf("%d",quantide);
}

void valor(int regiao, int quantide){
    float valor = 5;
    float soma;
    soma = valor * quantide;
    if (regiao==1){    
        printf("valor a pagar: %f\n",soma );
        printf("valor a pagar com frete: %f\n",soma * 1.10 );
        printf("na regiao norte");
    } else if (regiao ==2){
        printf("valor a pagar: %f\n",soma );
        printf("valor a pagar com frete: %f\n",soma * 1.08 );
        printf("na regiao nordeste");
    } else if (regiao ==3){
        printf("valor a pagar: %f\n",soma );
        printf("valor a pagar com frete: %f\n",soma * 1.12 );
        printf("na regiao centro oeste");
    } else if (regiao ==4){
        printf("valor a pagar: %f\n",soma );
        printf("valor a pagar com frete: %f\n",soma * 1.15 );
        printf("na regiao sudeste");
    } else if (regiao ==5){
        printf("valor a pagar: %f\n",soma );
        printf("valor a pagar com frete: %f\n",soma * 1.11 );
        printf("na regiao sul");
    } else {
        printf("erro!!!");
    }
}

int main(){
    int regiao;
    int quantide;
    verregiao(&regiao);
    verquantide(&quantide);
    valor(regiao,quantide);
}