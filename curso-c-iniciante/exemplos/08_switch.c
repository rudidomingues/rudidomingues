#include <stdio.h>

int main(void) {
    int opcao;

    printf("Escolha uma opcao:\n");
    printf("1 - Exibir saudacao\n");
    printf("2 - Exibir dica de estudo\n");
    printf("0 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Ola! Continue praticando C.\n");
            break;
        case 2:
            printf("Dica: teste seu programa com entradas diferentes.\n");
            break;
        case 0:
            printf("Programa encerrado.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
