#include <stdio.h>

int main() {
    int i,x = 1,anterior = 0,iesimo = 1;

    /* recebe i */
    printf("Entre com i:");
    scanf("%d",&i);

    /* imprime a sequencia */
    while (i >= 0) {
        if (x == 1) {
            printf("%d,%d",anterior,iesimo);
            x = 0;
            i = i - 2;
        } else {
            iesimo = iesimo + anterior;
            anterior = iesimo - anterior;
            printf(",%d",iesimo);
            i = i - 1;
        }
    }

    printf("\n");
}
