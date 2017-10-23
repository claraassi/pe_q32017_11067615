#include <stdio.h>
#include <stdlib.h>

void somar_vetores (int * v1, int * v2, int * v3)
{
	int i = 0;
	
	while (i < 5) {
		v3[i] = v1[i] + v2[i];
		i++;
	}
}

int main ()
{
	int v1[5];
	int v2[5];	
	int v3[5];
	int i = 0;
	
	scanf("%d %d %d %d %d",&v1[0],&v1[1],&v1[2],&v1[3],&v1[4]);
	
	scanf("%d %d %d %d %d",&v2[0],&v2[1],&v2[2],&v2[3],&v2[4]);
	
	somar_vetores(v1,v2,v3);
	
	while (i < 5) {
		printf("%d ",v3[i]);
		i++;
	}
	
	printf("\n");
	
	return 0;
}
