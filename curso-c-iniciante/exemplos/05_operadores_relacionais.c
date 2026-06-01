#include <stdio.h>

int main(void) {
    int numero_a = 8;
    int numero_b = 5;

    printf("%d == %d resulta em %d\n", numero_a, numero_b, numero_a == numero_b);
    printf("%d != %d resulta em %d\n", numero_a, numero_b, numero_a != numero_b);
    printf("%d > %d resulta em %d\n", numero_a, numero_b, numero_a > numero_b);
    printf("%d < %d resulta em %d\n", numero_a, numero_b, numero_a < numero_b);
    printf("%d >= %d resulta em %d\n", numero_a, numero_b, numero_a >= numero_b);
    printf("%d <= %d resulta em %d\n", numero_a, numero_b, numero_a <= numero_b);

    return 0;
}
