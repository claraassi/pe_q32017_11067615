#include <stdio.h>

typedef struct tempo {
    int min;
    int seg;
    int cen;
} tempo;

struct tempo calcular_diferenca (struct tempo med_1, struct tempo med_2)
{
    tempo diferenca;
    int tempo_1, tempo_2, tempo_dif;
    
    tempo_1 = ((med_1.min * 60) + med_1.seg) * 100 + med_1.cen;
    tempo_2 = ((med_2.min * 60) + med_2.seg) * 100 + med_2.cen;
    tempo_dif = tempo_2 - tempo_1;
    
    diferenca.cen = tempo_dif % 100;
    diferenca.seg = (tempo_dif / 100) % 60;
    diferenca.min = tempo_dif / 6000;
    
    return diferenca;
}

int main ()
{
    tempo med_1;
    tempo med_2;
    tempo diferenca;
    
    scanf("%dm %ds %d", &(med_1.min), &(med_1.seg), &(med_1.cen));
    scanf("%dm %ds %d", &(med_2.min), &(med_2.seg), &(med_2.cen));
    
    diferenca = calcular_diferenca(med_1,med_2);
    
    printf("%dm %ds %d\n", diferenca.min, diferenca.seg, diferenca.cen);
    
    return 0;
}
