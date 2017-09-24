#include <stdio.h>

double main() {
    double temperatura;
    int opcao;

    /* le temperatura e opcao */
    printf("Entre com temperatura:");
    scanf("%lf",&temperatura);
    printf("Entre com opcao (1 converte de C para K e 2 converte de K para C):");
    scanf("%d",&opcao);

    /* converte temperatura */
    switch (opcao) {
        case 1:
            temperatura = temperatura + 273.15;
            printf("A temperatura em F e %lf\n",temperatura);
            break;
        case 2:
            temperatura = temperatura - 273.15;
            printf("A temperatura em C e %lf\n",temperatura);
            break;
        default:
            printf("Opcao invalida\n");
    }
}
