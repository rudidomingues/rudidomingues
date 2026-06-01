#include <stdio.h>

int main(void) {
    char nome[50];
    int idade;

    printf("Digite seu primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Ola, %s! Voce informou que tem %d anos.\n", nome, idade);

    return 0;
}
