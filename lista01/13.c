#include <stdio.h>

int main() {
    int valor,valor_final = 0,valor_tmp =1;
    
    /* le o valor */
    printf("Entre com o valor: ");
    scanf("%d",&valor);
    
    /* soma todos os numeros */
    while (valor_tmp <= valor) {
        valor_final = valor_final + valor_tmp;
        valor_tmp = valor_tmp + 1;
    }
    
    /* imprime o resultado */
    printf("Resultado da somatoria: %d\n",valor_final);
}
