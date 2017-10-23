#include <stdio.h>
#include <stdlib.h>

void calcular_transposta (int original[][3], int transposta[][3])
{
	int i = 0;
	int j = 0;
	
	while (i < 3) {
		while (j < 3) {
			transposta[i][j] = original[j][i];
			j++;
		}
		
		i++;
		j = 0;
	}
}

int main ()
{
	int original[3][3];
	int transposta[3][3];
	int i = 0;
	int j = 0;
	
	scanf("%d %d %d %d %d %d %d %d %d",&original[0][0],&original[0][1],
		&original[0][2],&original[1][0],&original[1][1],&original[1][2],
		&original[2][0],&original[2][1],&original[2][2]);
	
	calcular_transposta(original,transposta);
	
	while (i < 3) {
		while (j < 3) {
			printf("%d ",transposta[i][j]);
			j++;
		}
		
		printf("\n");
		i++;
		j = 0;
	}
	
	return 0;
}
