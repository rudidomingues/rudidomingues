#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a nota final (de 0 a 10): ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida.\n");
    } else if (nota >= 7) {
        printf("Estudante aprovado.\n");
    } else if (nota >= 5) {
        printf("Estudante em recuperacao.\n");
    } else {
        printf("Estudante reprovado.\n");
    }

    return 0;
}
