#include <stdio.h>

float main() {
    int valor,i = 1;
    float soma = 0,media;
    
    /*le os dez valores e os soma */
    while (i <= 10) {
        printf("Entre com o valor #%d:",i);
        scanf("%d",&valor);
        soma = soma + valor;
        i++;
    }
    
    /* calcula a media e imprime soma e media */
    media = soma / 10;
    printf("Soma = %f\nMedia = %f\n",soma,media);
}
