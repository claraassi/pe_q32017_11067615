#include <stdio.h>

double main() {
    double temperatura;
    int opcao;

    /* le temperatura e opcao */
    printf("Entre com temperatura:");
    scanf("%lf",&temperatura);
    printf("Entre com opcao (1 converte de C para F e 2 converte de F para C):");
    scanf("%d",&opcao);

    switch (opcao) {
        case 1:
            temperatura = ((9 * temperatura) / 5) + 32;
            printf("A temperatura em F e %lf\n",temperatura);
            break;
        case 2:
            temperatura = (5 * (temperatura - 32)) / 9;
            printf("A temperatura em C e %lf\n",temperatura);
            break;
        default:
            printf("Opcao invalida\n");
    }
}
