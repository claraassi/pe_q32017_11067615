#include <stdio.h>
#include <stdlib.h>

void shell_sort (int *vetor, int tamanho)
{
	int i, j, valor;
	int h = 1;
    
    while (h < tamanho) {
		h = 3 * h + 1;
    }
    
    while (h > 1) {
		h /= 3;
        
        for (i = h; i < tamanho; i++) {
            valor = vetor[i];
            j = i - h;
            
            while (j >= 0 && valor < vetor[j]) {
                vetor[j+h] = vetor[j];
                j -= h;
            }
            
            vetor[j+h] = valor;
        }
    }
}

int valores_diferentes (int *vetor, int tamanho)
{
	int qtd_valores = 1;
	int i = 1;
	
	while (i < tamanho) {
		if (vetor[i] == vetor[i-1]) {
			qtd_valores = qtd_valores;
		} else {
			qtd_valores++;
		}
		
		i++;
	}
	
	return qtd_valores;
}

int verificar_repeticoes (int *vetor, int repeticoes[][2], int tamanho, int qtd_valores)
{
	int i = 0;
	int j = 0;
	
	repeticoes[0][0] = vetor[0];
	
	for (int k = 0; k < qtd_valores; k++){
		repeticoes[k][1] = 0;
	}
	
	while (i < tamanho) {
		if (vetor[i] == repeticoes[j][0]) {
			repeticoes[j][1]++;
		} else {
			j++;
			repeticoes[j][0] = vetor[i];
			repeticoes[j][1]++;
		}
		
		i++;
	}
}

int main ()
{
	int tamanho;
	int *vetor;
	int i = 0;
	int qtd_valores;
	
	scanf("%d",&tamanho);
	
	vetor = malloc(tamanho * sizeof(int));
	
	while (i < tamanho) {
		scanf("%d",&vetor[i]);
		i++;
	}
	
	shell_sort(vetor,tamanho);
	
	qtd_valores = valores_diferentes(vetor,tamanho);
	
	int repeticoes[qtd_valores][2];
	
	verificar_repeticoes(vetor,repeticoes,tamanho,qtd_valores);
	
	for (int k = 0; k < qtd_valores; k++) {
		if (repeticoes[k][1] > 1) {
			printf("%d-%d ",repeticoes[k][0],repeticoes[k][1]);
		}
	}
	
	printf("\n");
	
	free(vetor);
	
	return 0;
}
