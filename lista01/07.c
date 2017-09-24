#include <stdio.h>

int main() {
    int x,y,resultado = 1;

    /* le x e y */
    printf("Entre com x:");
    scanf("%d",&x);
    printf("Entre com y:");
    scanf("%d",&y);

    /* calcula a x^y */
    while (y > 0) {
        resultado = resultado * x;
        y = y - 1;
    }

    printf("Resultado: %d\n",resultado);
}
