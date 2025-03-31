#include <stdio.h>

void numero(int *num){
    printf("digite um numero: ");
    scanf("%d",num);
}
void resultado(int num){
    if (num % 2 == 0){
        printf("numero par");
    } else{
        printf("nuemro impar");
    }
}
int main()
{
    int num;
    numero(&num);
    resultado(num);
    return 0;
}
