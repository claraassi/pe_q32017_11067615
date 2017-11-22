#include <stdio.h>

#define SAIDA "media_alunos.txt"
#define ENTRADA "lista_alunos.txt"

typedef struct ficha {
    char nome[100];
    float p1;
    float p2;
    float p3;
    float media;
    char ra[4];
} ficha;

void calcular_media (FILE *notas, FILE *medias, struct ficha alunos[50])
{
    for (int i = 0; i < 50; i++) {
        fscanf(notas, "%s %s %f %f %f", alunos[i].nome, alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);

        alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3;
        
        fprintf(medias, "%s %s %.2f %.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
    }
}

int main ()
{
    FILE *notas;
    FILE *medias;
    ficha alunos[50];
    
    notas = fopen(ENTRADA, "r");
    medias = fopen(SAIDA, "w");
    
    if(notas == NULL) {
        printf("Nao foi possivel abrir o arquivo de entrada\n");
    } else if(medias == NULL) {
        printf("Nao foi possivel abrir o arquivo de saida\n");
    } else {
        calcular_media(notas, medias, alunos);
    }
    
    fclose(notas);
    fclose(medias);
    
    return 0;
}
