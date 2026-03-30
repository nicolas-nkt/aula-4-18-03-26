#include <stdio.h>

int main() {
    int contagem;

    printf("Digite contagem em 5: ");
    scanf("contagem em %d", &contagem);

    printf("Iniciando contagem regressiva...\n");

    while (contagem >= 0) {
        printf("%d\n", contagem);
        contagem--;
    }

    printf("Lançamento!! parabens por lançar seu primeiro foguete!!!\n");

    return 0;
}
