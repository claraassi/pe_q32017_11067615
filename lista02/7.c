#include <stdio.h>
#include <math.h>

int erro(int e)
{
    printf("Erro %d\n",e);
    return 0;
}

float celsius(int out, float valor)
{
    if (out == 1) return valor;
    if (out == 2) return ((1.8*valor)+32);
    if (out == 3) return valor + 273.15;
    return erro(3); /* escala de temperatura de saida invalida */
}

float fahrenheit(int out, float valor)
{
    if (out == 1) return ((valor-32)*5)/9;
    if (out == 2) return valor;
    if (out == 3) return (((valor-32)*5)/9) + 273.15;
    return erro(3); /* escala de temperatura de saida invalida */
}

float kelvin(int out, float valor)
{
    if (out == 1) return valor - 273.15;
    if (out == 2) return ((1.8*(valor-273.15))+32);
    if (out == 3) return valor;
    return erro(3); /* escala de temperatura de saida invalida */
}

float temperatura(int in, int out, float valor)
{
    if (in == 1) return celsius(out,valor);
    if (in == 2) return fahrenheit(out,valor);
    if (in == 3) return kelvin(out,valor);
    return erro(2); /* escala de temperatura de entrada invalida */
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

float decimal(int out, float valor)
{
    if (out == 1) return valor;
    if (out == 2) return dec_bin(floor(valor));
    return erro(3); /* base de saida invalida */
}

float binario(int out, float valor)
{
    if (out == 1) return bin_dec(floor(valor));
    if (out == 2) return valor;
    return erro(3); /* base de saida invalida */
}

float base(int in, int out, float valor)
{
    if (in == 1) return decimal(out,valor);
    if (in == 2) return binario(out,valor);
    return erro(2); /* base numerica invalida */
}

float converter(int tipo, int in, int out, float valor)
{
    if (tipo == 1) return temperatura(in,out,valor);
    if (tipo == 2) return base(in,out,valor);
    return erro(1); /* tipo de conversao invalida */
}

float main()
{
    int tipo_conversao,tipo_entrada,tipo_saida;
    float entrada;
    
    scanf("%d %d %d %f",&tipo_conversao,&tipo_entrada,&tipo_saida,&entrada);
    
    printf("%.2f\n",converter(tipo_conversao,tipo_entrada,tipo_saida,entrada));
    
    return 0.0;
}
