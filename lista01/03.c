#include <stdio.h>

int main() {
    int x, y, subtracao;

    /* leitura de x e y */
    printf("Entre com x:");
    scanf("%d",&x);
    printf("Entre com y:");
    scanf("%d",&y);

    /* subtrai y de x e imprime o resultado */
    subtracao = x - y;
    printf("Resultado da subtracao: %d\n",subtracao);
}
