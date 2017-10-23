#include <stdio.h>
#include <stdlib.h>

int comprimento (char * palavra)
{
	int i = 0;
	
	while (palavra[i] != '\0') i++;
	
	return i;
}

void inverter_string (char * original, char * invertida)
{
	int tamanho;
	int i;
	
	tamanho = comprimento(original);
	
	for (i = 0; i < tamanho; i++){
		invertida[i] = original[tamanho - 1 - i];
	}
}

int main ()
{
	char original[255];
	char invertida[255];
	int i, tamanho;
	
	fgets(original,255,stdin);
	
	tamanho = comprimento(original);
	
	inverter_string(original,invertida);
	
	for (i = 0; i < tamanho; i++) {
		printf("%c",invertida[i]);
	}
	
	printf("\n");
	
	return 0;
}
