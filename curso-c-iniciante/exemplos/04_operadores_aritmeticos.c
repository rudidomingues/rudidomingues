#include <stdio.h>

int main(void) {
    int numero_a = 10;
    int numero_b = 3;

    printf("Adicao: %d\n", numero_a + numero_b);
    printf("Subtracao: %d\n", numero_a - numero_b);
    printf("Multiplicacao: %d\n", numero_a * numero_b);
    printf("Divisao inteira: %d\n", numero_a / numero_b);
    printf("Resto da divisao: %d\n", numero_a % numero_b);
    printf("Divisao com casas decimais: %.2f\n", (float) numero_a / numero_b);

    return 0;
}
