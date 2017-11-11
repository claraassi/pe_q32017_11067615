#include <stdio.h>
#include <math.h>

typedef struct ponto_espaco {
    float x;
    float y;
    float z;
} ponto_espaco;

float calcula_distancia (struct ponto_espaco a, struct ponto_espaco b)
{
    float d;
    
    d = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) + (a.z-b.z)*(a.z-b.z));
    
    return d;
}

float truncar (float distancia)
{
    float truncado;
    
    truncado = floor(distancia * 100.0) / 100.0;
    
    return truncado;
}

int main ()
{
    ponto_espaco a;
    ponto_espaco b;
    
    scanf("%f, %f, %f", &(a.x), &(a.y), &(a.z));
    scanf("%f, %f, %f", &(b.x), &(b.y), &(b.z));
    
    printf("%.2f\n", truncar(calcula_distancia(a,b)));
    
    return 0;
}
