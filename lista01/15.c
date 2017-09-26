#include <stdio.h>

int main() {
    int n,n_tmp = 100;
    
    /* le n */
    printf("Entre com n:");
    scanf("%d",&n);
    
    /* checa se ne e maior que 100 e verifica quais numeros sao pares */
    if (n > 100) {
        while (n_tmp <= n) {
            if ((n_tmp % 2) == 0) {
                printf("%d\n",n_tmp);
            }
            n_tmp++;
        }
    } else {
        printf("n deve ser maior que 100\n");
    }
}
