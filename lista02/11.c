#include <stdio.h>

int dec_bin(int valor);
int bin_dec(int valor);
int selecionar_opcao(int valor, int opcao);

int main()
{
    int opcao, valor;
    
    scanf("%d %d",&valor,&opcao);
    
    printf("%d\n",selecionar_opcao(valor,opcao));
    
    return 0;
}

int dec_bin(int valor)
{
    if (valor == 0) return 0;
    return valor%2 + dec_bin(valor/2)*10;
}

int bin_dec(int valor)
{
    if (valor == 1) return 1;
    return (valor%10) + bin_dec(valor/10)*2;
}

int selecionar_opcao(int valor, int opcao)
{
    if (opcao == 1) return dec_bin(valor);
    if (opcao == 2) return bin_dec(valor);
}
