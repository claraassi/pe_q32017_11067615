#include <stdio.h>

int main() {
    int valor,valor_final = 0,opcao,multiplicador = 1;

    /* le valor e opcao */
    printf("Entre com o valor:");
    scanf("%d",&valor);
    printf("Entre com a opcao (1 converte de decimal para binario e 2 de binario para decimal):");
    scanf("%d",&opcao);
    
    /* converte o valor */
    switch (opcao) {
        case 1:
            if ((valor % 2) == 0) {
                while (valor >= 1) {
                    valor_final = (valor_final + (valor % 2)) * 10;
                    valor = valor / 2;
                }
                printf("O valor em binario e %d\n",valor_final);
                
            } else {
                while (valor > 1) {
                    valor_final = (valor_final + (valor % 2)) * 10;
                    valor = valor / 2;
                }
                valor_final = valor_final + 1;
                printf("O valor em binario e %d\n",valor_final);
            }
            break;
            
        case 2:
            while (valor >=1) {
                valor_final = ((valor % 10) * multiplicador) + valor_final;
                valor = valor / 10;
                multiplicador = multiplicador * 2;
            }
            printf("O valor em decimal e %d\n",valor_final);
            break;
            
        default:
            printf("Opcao invalida\n");
            break;
    }
}
