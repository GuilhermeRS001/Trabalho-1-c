#include <stdint.h>

int main() {
    printf("Multiplos de 5 entre 1 e 500:\n");

    for (int i = 5; i <= 500; i += 5) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}