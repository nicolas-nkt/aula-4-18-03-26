#include <stdio.h>

int main() {
    int tipo;

    printf("Digite o tipo (1, 2 ou 3): ");
    scanf("%d", &tipo);

    switch (tipo) {
        case 1:
            printf("Indicar area brinquedos.\n");
            break;
        case 2:
            printf("Indicar area jardim.\n");
            break;
        case 3:
            printf("Indicar area vip.\n");
            break;
        default:
            printf("Tipo invalido.\n");
    }

    return 0;
}
