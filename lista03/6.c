#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void *a, const void *b)
{
    return (*(int *) a - *(int *) b);
}

float calcular_mediana (int *vetor, int n)
{
    float mediana;
    
    if ((n%2) == 0) {
        mediana = ((float) vetor[(n-1)/2] + (float) vetor[((n-1)/2)+1])/2;
    } else {
        mediana = (float) vetor[((n-1)/2)];
    }
}

int main ()
{
    int n;
    int *vetor;
    
    scanf("%d",&n);
    
    vetor = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d",&vetor[i]);
    }
    
    qsort(vetor,n,sizeof(int),cmpfunc);
    
    printf("%.2f\n",calcular_mediana(vetor,n));
    
    free(vetor);
    
    return 0;
}
