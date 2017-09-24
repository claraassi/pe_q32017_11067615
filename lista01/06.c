#include <stdio.h>

int main() {
    int x,fatorial = 1;

    /* le x */
    printf("Entre com x:");
    scanf("%d",&x);

    /* checa se o numero e maior ou igual a 0
     * se for, e se for diferente de 0 ou 1, calcula o fatorial */
    if (x >= 0) {
        if (x == 0 || x == 1) {
            fatorial = 1;
        } else {
            while (x > 1) {
                fatorial = fatorial * x;
                x = x - 1;
            }
        }

        printf("Fatorial: %d\n",fatorial);
    } else {
        printf("So sao aceitos valores positivos de x");
    }
}
