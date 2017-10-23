#include <stdio.h>
#include <stdlib.h>

int comprimento (char * palavra)
{
	int i = 0;
	
	while (palavra[i] != '\0') i++;
	
	return i;
}

int contar_vogais (char * palavra)
{
	int tamanho, i;
	int vogais = 0;
	
	tamanho = comprimento(palavra);
	
	for (i = 0; i < tamanho; i++) {
		if (palavra[i] > 85) {
			if (palavra[i] == 97 || palavra[i] == 101 || palavra[i] == 105 
			|| palavra[i] == 111 || palavra[i] == 117) {
				vogais++;
			}
		} else {
			if (palavra[i] == 65 || palavra[i] == 69 || palavra[i] == 73 ||
			palavra[i] == 79 || palavra[i] == 85) {
				vogais++;
			}
		}
	}
	
	return vogais;
}

int main ()
{
	char palavra[255];
	
	fgets(palavra,255,stdin);
	
	printf("%d\n", contar_vogais(palavra));
	
	return 0;
}
