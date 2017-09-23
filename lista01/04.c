#include <stdio.h>

int main() {
    int x, y, produto;

    /* leitura de x e y */
    printf("Entre com x:");
    scanf("%d",&x);
    printf("Entre com y:");
    scanf("%d",&y);

    /* multiplica x por y e imprime o resultado */
    produto = x * y;
    printf("Resultado do produto: %d\n",produto);
}
