#include <stdio.h>

int main()
{
    int x,y,x_ori,quad_soma = 0,soma_quad = 0,diferenca;
    
    printf("Entre com x e y, separados por espaco:");
    scanf("%d %d",&x_ori,&y);
    
    if (x_ori < y) {
        x = x_ori;
        
        while (x <= y) {
            quad_soma += x;
            soma_quad += x * x;
            x++;
        }
        
        quad_soma *= quad_soma;
        
        diferenca = quad_soma - soma_quad;
        
        printf("soma dos quadrados = %d\n",soma_quad);
        printf("quadrado da soma = %d\n",quad_soma);
        printf("diferenca = %d\n",diferenca);
    } else {
        printf("x deve ser menor que y");
    }
    
    return 0;
}
