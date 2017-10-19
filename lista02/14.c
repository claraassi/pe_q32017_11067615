#include <stdio.h>
#include <math.h>

int verificar_palindromo(int numero,int digitos);
int contar_digitos(int numero);

int main()
{
    int numero;
    
    scanf("%d",&numero);
    
    if (numero == (verificar_palindromo(numero,contar_digitos(numero))/10)) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }
    
    return 0;
}

int verificar_palindromo(int numero,int digitos)
{
    if (numero == 0) return 0;
    return (numero%10)*pow(10,digitos) + verificar_palindromo(numero/10,digitos-1);
}

int contar_digitos(int numero)
{
    if (numero < 10 ) return 1;
    return 1 + contar_digitos(numero/10);
}
