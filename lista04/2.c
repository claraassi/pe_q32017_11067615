#include <stdio.h>

typedef struct tempo {
    int min;
    int seg;
    int cen;
} tempo;

struct tempo calcular_diferenca (struct tempo med_1, struct tempo med_2)
{
    tempo diferenca;
    
    diferenca.min = med_1.min - med_2.min;
    diferenca.seg = med_1.seg - med_2.seg;
    diferenca.cen = med_1.cen - med_2.cen;
    
    if (diferenca.cen < 0) {
        diferenca.cen += 100;
        diferenca.seg -= 1;
    }
    
    if (diferenca.seg < 0) {
        diferenca.seg += 60;
        diferenca.min -= 1;
    }
    
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
