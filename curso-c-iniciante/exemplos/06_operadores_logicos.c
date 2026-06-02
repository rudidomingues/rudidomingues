#include <stdio.h>

int main(void) {
    int idade = 18;
    int possui_documento = 1;
    int esta_chovendo = 0;
    int possui_guarda_chuva = 1;

    int pode_entrar = idade >= 18 && possui_documento;
    int precisa_de_protecao = esta_chovendo || possui_guarda_chuva;
    int dia_ensolarado = !esta_chovendo;

    printf("Pode entrar? %d\n", pode_entrar);
    printf("Ha chuva ou guarda-chuva disponivel? %d\n", precisa_de_protecao);
    printf("O dia esta sem chuva? %d\n", dia_ensolarado);

    return 0;
}
