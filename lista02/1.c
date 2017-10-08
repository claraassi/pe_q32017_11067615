#include <stdio.h>

int verificar_paridade(int valor)
{
    if ( (valor%2) == 0 ) return 0;
    return 1;
}

int main()
{
    int valor;
    
    scanf("%d",&valor);
    
    printf("%d\n",verificar_paridade(valor));
    
    return 0;
}
