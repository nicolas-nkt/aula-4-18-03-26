#include <stdio.h>

int main() {
    int valor = 0;
    
    printf("Numero: ");
    scanf("%d", &valor);
    
    while (valor < 10) {
        printf("%d\n", valor);
        valor++;
    }

    return 0;
}
