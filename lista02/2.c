#include <stdio.h>

/* funcao que calcula volume */
float calcular_volume(float largura, float comprimento, float altura)
{
    return largura * comprimento * altura;
}

float main()
{
    float largura, comprimento, altura;
    
    scanf("%f %f %f",&largura,&comprimento,&altura);
    
    printf("%.2f\n",calcular_volume(largura,comprimento,altura));
    
    return 0.0;
}
