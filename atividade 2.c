#include <stdio.h>
void numero(int *num){
    printf("digite um numero: ");
    scanf("%d",num);
}

void resultado(int num){
    if(num > 0){
        printf("%d e positivo ",num);
    } else if (num < 0) {
        printf("%d e negativo ",num);
    } else{
        printf("o numero e %d",num);
    }

}

int main(){
    int num;
    numero(&num);
    resultado(num);
    return 0;
}